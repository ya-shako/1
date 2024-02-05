#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a = 0, b = 1, epsilon, s = 0;
    std::cin >> epsilon;
    while (a < b){
        s += epsilon*(a*sqrt(1-a*a));
        a += epsilon;
    }
    std::cout << s;
}



