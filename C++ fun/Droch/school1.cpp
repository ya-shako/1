#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main(){
    long long x, y, n, m, col = 0, ans = 0;
    cin >> n >> m >> x >> y;
    swap(n, m);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            col += (1 + i)*(1 + j);
        }   
    }
    cout << col; 
}