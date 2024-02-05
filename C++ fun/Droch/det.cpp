#include <iostream>
#include <vector>
#include <string>
#include <math.h>

template <typename T>
void printm(std::vector<std::vector<T>>* v){
        for (int i = 0; i < (*v).size(); i++){
            for (int j = 0; j < (*v).size(); j++){
                std::cout << (*v)[i][j] << " ";
        }
        std::cout << "\n";
    }
}


std::vector<std::vector<int>> minor(std::vector<std::vector<int>> v, int x, int y){
    std::vector<std::vector<int>> minor(v.size() - 1);
    int k = 0, t = 0;
    for (int i = 0; i < v.size(); i++){
        for (int j = 0; j < v.size(); j++){
            if (i == x) {
                k++;
                break;
            }
            else if (j == y) continue;
            else minor[i - k].push_back(v[i][j]);
        }   
    }
    return minor;
}

float det(std::vector<std::vector<int>> v){
    int ans;
    if (v.size() == 1) return v[0][0];
    else{
        for (int i = 0; i < v.size(); i++){
            ans += v[0][i] * det(minor(v, i, 0))*pow(-1, i);
        }
    }
    return ans;
}



std::vector<std::vector<float>> getOpposit(std::vector<std::vector<int>> v){
    std::vector<std::vector<float>> opposit (1);
    opposit[0].push_back(0);
        
    float d = det(v);
    if (d != 0){
        opposit.clear();
        opposit.resize(v.size());
        for (int i = 0; i < v.size(); i++){
            for (int j = 0; j < v.size(); j++){
                opposit[i].push_back(det(minor(v, i, j))*pow(-1, i)/ d);
            }
        }
        return opposit;
    }
    std::cout << "Det is 0. Chill";
    return opposit;
} 

int main(){
    std::vector<std::vector<int>> m;
    std::vector<std::vector<float>> op;
    int n = 3, q;
    m.resize(n);
    op.resize(n);
    for (int i = 0; i < n; i++){
        m[i].resize(n);
        op[i].resize(n);
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            std::cin >> q;
            m[i][j] = q;
        }
    }
    op = getOpposit(m);
    printm(&op);
};