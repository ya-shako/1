#include <iostream>
#include <cstdlib>
#include "News.h"
#include <string>
#include <vector>

using namespace std;

int main(){
    Feed p;
    string Theme, mes;
    News temp;
    for (int i = 0; i < 3; i++){
        cin >> Theme;
        getline(cin, mes);
        temp = News(Theme, mes);
        p.add(temp);
    }

    p.All();
    News q("123", "Babaka");
    p.add(q);
    p.printUnread();
    p.isRead(2);
    p.printUnread();
    p.getSize();
}