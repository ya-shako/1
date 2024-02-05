#include <iostream>
#include "H 2.3.h"
#include <cmath>

using namespace std;

double f1(double x){
    return sin(x)/(x*x); 
}
double f2(double x){
    return log(x)+2*x; 
}
int main(){
    int a = 1, b = 2, c = 1, d = 3;
    double accuracy;
    std::cin >> accuracy;

    std::cout << "First function's area: ";
    TRAP(f1, a, b,  accuracy);
    std::cout << "\n";
    std::cout << "Second function's area: ";
    TRAP(f2, c, d,  accuracy);
    std::cout << "\n";
}