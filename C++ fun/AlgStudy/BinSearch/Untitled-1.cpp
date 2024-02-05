#include <iostream>

int main(){
    int* p;
    int value = 10;
    p = &value;
    int m = *p;
    std::cout << value << " " << p <<"\n";
    std::cout << m << " " << &m;
}