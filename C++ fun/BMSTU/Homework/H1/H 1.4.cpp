#include <iostream>
using namespace std;
int main()
{
    int a,b,c,x,y,w;
    std::cin >> x >> y >> w;
    a = x + y; b = x + w; c = y * w;
    if (a > b){
        if (a > c) std::cout << a;
        else std::cout << c;
    }
    else{
        if (b > c) std::cout << b;
        else std::cout << c;
    }

}
