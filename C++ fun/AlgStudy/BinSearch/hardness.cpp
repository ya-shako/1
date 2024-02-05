#include <iostream>

int main(){
    int n, i = 1, c = 0;
    std::cin >> n;
    while (i < n){
        i*=2; c++;
    }
    std::cout << c;
    return 0;
}