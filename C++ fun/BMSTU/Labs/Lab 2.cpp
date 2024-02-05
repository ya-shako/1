#include <iostream>
int main(){
    float x, y, k;
    std::cout << "Enter point coordinates: ";
    std::cin >> x >> y;
    std::cout << "Enter the tanget of the slope: ";
    std::cin >> k;
    if ((x*x + y*y <= 1) & (y <= k*x)){
        std::cout << "The point belongs to the shaded area" << std::endl;
        return 0;
    }
    std::cout << "The point does not belong to the shaded area" << std::endl;
}