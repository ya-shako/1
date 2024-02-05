#include <iostream>

int main(){
    char** m;
    int n;
    std::cin >> n;
    m = new char* [n];
    for (int i = 0; i < n; i++){
        m[i] = new char [n]; 
    }
    char q;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            std::cin >> q;
            m[i][j] = q;
        } 
    }
    std::cout << "=======================\n";
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            std::cout << m[i][j] << " ";
        } 
        std::cout << "\n";
    }
    for (int j = 0; j < std::abs((n+n-1)/2 - 0) ; j++){
        std::cout << " ";
    }
    std::cout << "|\n";
    for (int j = 0; j < std::abs((n+n-1)/2 - 0) ; j++){
        std::cout << " ";
    }
    std::cout << "V\n";

    int k, p;   
    for (int i = 0; i < 2*n; i++){
        for (int j = 0; j < std::abs((n+n-1)/2 - i) ; j++){
            std::cout << " ";
        }
        k = std::min(i, n - 1);
        p = std::abs(i - k);
        while (p < n & k > -1){
            std::cout << m[k][p] << " ";
            k--;
            p++;
        }
        std::cout << "\n";
    }
}    
    