#include <iostream>
#include "List.h"
#include <string>
int main(){
    List l;
    std::string val;
    int count = 0;

    while (val != "."){
        std::cin >> val;
        count ++;
        if (val != ".") l.append(stoi(val));
    }
    std::cout << "\n";
    element * el = l.head;
    int c = 0;
    do {
        if (c % 2 == count % 2) std::cout << el->value << " ";
        c++;
        el = el->next;
    } while (el != NULL);
}