#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    long long w, h, n, l, r;
    cin >> w >> h >> n;
    l = 0;
    r = max(w*n, h*n);
    while (l < r){
        auto c = (l+r)/2;
        if (n <= ((c/w) * (c/h))) r = c;
        else l = c + 1;
    }  
    cout << l;   
    return 0;
}