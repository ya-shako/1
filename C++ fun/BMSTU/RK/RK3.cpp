#include <iostream>
#include <cstdlib>
#include <vector>
#include "ListString.h"

using namespace std;

int main(){
    string s;
    getline(cin, s);
    List l;
    l.splited(s, ' ');
    l.solve();
    l.print();
    l.del();
}