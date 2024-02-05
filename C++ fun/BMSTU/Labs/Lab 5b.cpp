#include <iostream>
#include <vector>

int main(){
    int n;
    std::cin >> n;
    std::vector<std::vector<int>> m(n+2), pref(n+2), post(n+2);
    int q;
    for (int i = 0; i < n+2; i++){
        for (int j = 0; j < n; j++){
            if (i == 0 | i == n+1){
                m[i].push_back(0);
                pref[i].push_back(0);
                post[i].push_back(0);
            }
            else {
                std::cin >> q;
                m[i].push_back(q);
                pref[i].push_back(0);
                post[i].push_back(0);
            }
        }
    }
    std::cout << "\n";
    for (int i = 1; i < n+2; i++){
        for (int j = 0; j < n; j++){
            pref[i][j] = pref[i-1][j] + m[i][j];
        }
    }
    for (int i = n; i >= 0; i--){
        for (int j = 0; j < n; j++){
            post[i][j] = post[i+1][j] + m[i][j];
        }
    }

    for (int i = 1; i < n+1; i++){
        for (int j = 0; j < n; j++){
            if (pref[i-1][j] < post[i+1][j]) m[n+1][j] = m[i][j]; 
        }
    }
    for (int i = 1; i < n+2; i++){
        for (int j = 0; j < n; j++){
            std::cout << m[i][j] << " "; 
        }
        std::cout << "\n";
    }
}