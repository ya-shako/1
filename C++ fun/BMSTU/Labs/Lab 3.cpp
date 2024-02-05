#include <iostream>
int main(){
    int a1, a2, an;
    a1 = 12; a2 = 10; an = a1 + a2 - 2;
    for (;an < 100;){
        a1 = a2; a2 = an; an = a1 + a2 - 2;
        std::cout << an << std::endl;
    }
    std::cout << a2 << std::endl;

    a1 = 12; a2 = 10; an = a1 + a2 - 2;
    while (an < 100){
        a1 = a2; a2 = an; an = a1 + a2 - 2;
    }
    std::cout << a2 << std::endl;

    a1 = 12; a2 = 10; an = a1 + a2 - 2;
    do{
        a1 = a2; a2 = an; an = a1 + a2 - 2;
    } while(an < 100);
    std::cout << a2 << std::endl;

    return 0;
}