#include <iostream>

void TRAP(double f(double), int a, int b, int accuracy){
    double n = accuracy;
    double h = (b - a)/n;
    double s = 0;
    float x = a;
    for (int i = 1; i < n; i++){
        s += std::max(f(x), -1*f(x));
        x += h;
    } 
    std::cout << h*((f(a) + f(b))/2 + s);
}