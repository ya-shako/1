#include <iostream>
#include <vector>

void solver(std::vector<std::vector<int>> v, int n, int k){
    int min1 = v[0][0], x1 = 0, y1 = 0, min2 = v[n-1][n-1], x2 = n-1, y2 = n-1;
    for (int i = 0; i < n; i ++){
        for (int j = 0; j < n; j++){
            if (j <= k & i <= k){
                if (v[i][j] <= min1){
                    min1 = v[i][j];
                    y1 = i;
                    x1 = j; 
                }
            }
            else{
                if (v[i][j] <= min2){
                    min2 = v[i][j];
                    y2 = i;
                    x2 = j; 
                }
            }
        }
    }
    std::cout << "Min of first peace: " << min1 << " it's position " << y1 << " " << x1 << "\n";
    std::cout << "Min of second peace: " << min2 << " it's position " << y2 << " " << x2 << "\n";
}

int main(){
    int n, k, q;
    std::cin >> n >> k;
    k--;
    std::vector<std::vector<int>> v(n);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            std::cin >> q;
            v[i].push_back(q);
        }
    }
    solver(v, n, k);
}