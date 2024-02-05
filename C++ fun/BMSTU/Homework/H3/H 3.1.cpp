#include <iostream>
#include <string>
#include "ListString.h"
#include <cstdlib>

int main(){
    std::string s;
    std::getline(cin, s);
    List l;
    l.splited(s, ' ');
    l.solve();
    l.print();
    l.del();
}