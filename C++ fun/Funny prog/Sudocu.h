#include <iostream>
#include <vector>

using namespace std;

int indexOf(vector<int> a, int el){
    vector<int>::iterator it = a.begin();
    int pos = -1;
    while (it != a.end()){
        if (*it == el) break;
        else {
            pos++;
            it++;
        }
    }
    return pos;
}

struct Possible{
    vector<int> nums;
    int col, row;
};

class Sudocu{
    public:
    vector<vector<int>> sudocu;
    Sudocu();
    int** solve();
    void printS();

    private:
    vector<int> getPossible(int, int);
};

Sudocu::Sudocu(){
    int q;
    sudocu.resize(9);
    for (int i = 0; i < 9; i++){
        sudocu[i].resize(9);
    }
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            cin >> q;
            sudocu[i][j] = q;
        }
    }
}

void Sudocu::printS(){
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            std::cout << sudocu[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

vector<int> Sudocu::getPossible(int x, int y){
    vector<int> ans = {1,2,3,4,5,6,7,8,9};
    int ind;
    for(int i = 0; i < 9; i++){
        ind = indexOf(ans, sudocu[x][i]);
        swap(ans[ind], ans[-1]);
        if (ind > -1){
            ans.pop_back();
        }
    }
    for(int i = 0; i < 9; i++){
        ind = indexOf(ans, sudocu[i][y]);
        swap(ans[ind], ans[-1]);
        if (ind > -1){
            ans.pop_back();
        }
    }
    for(int i = x + x/3; i < x + x/3 + 3; i++){
        for(int j = y + y/3; j < y + y/3 + 3; j++){
            ind = indexOf(ans, sudocu[x][y]);
            swap(ans[ind], ans[-1]);
            if (ind > -1){
                ans.pop_back();
            }
        }
    }
    if (ans.size() == 1) sudocu[x][y] == ans[0];
}

