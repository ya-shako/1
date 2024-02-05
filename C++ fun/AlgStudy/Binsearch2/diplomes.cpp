#include <iostream>
#include <algorithm>

int bs(int* arr[], int n){
    int l = 0, r = sizeof(*arr)/sizeof(int);
    int m = (l+r)/2;
    while (r - l > 1){
        m = (l+r)/2;
        if ((*arr)[m] > n) r = m-1;
        else l = m+1;
    }
    if (std::abs(n - (*arr)[l]) > std::abs((*arr)[r] - n)) return r;
    return l;
}

int main(){
    long long a, b, c, nr, nc, min, mem = 0;
    std::cin >> a >> b >> c;
    min = a*b*c;
    for (int i = 1; i < c+1; i++){
        nr = i;
        if ((c-i) % i != 0) nc = (c - i)/i + 2;
        else  nc = (c - i)/i + 1;

        if (std::abs(nr * b - nc * a) <= min){
            mem = i;
            min = std::abs(nr * b - nc * a);
        }
    }
    long long i = mem;
    nr = i;
    if ((c-i) % i != 0) nc = (c - i)/i + 2;
    else  nc = (c - i)/i + 1;
    nr *= b;
    nc *= a;
    long long count = 0;
    while (count < nc | count < nr) count += 1;
    std::cout << count;
    return 0;
}