#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long double y1, y2, y, x, D, d;
    std::cout << "x y1 y2 y D d\n";
    for (x = 5; x <= 25; x+=5){
        y1 = cos(x);
        y2 = sin(x); 
        y = y2*y2 + y1*y1;
        D = 1 - y;
        d = D;
        std::cout << x << " " << y1 << " " << y2 << " " << y << " " << D << " " << d << endl;
    }
}
