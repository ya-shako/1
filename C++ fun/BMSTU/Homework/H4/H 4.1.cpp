#include <iostream>
#include <cstdlib>
#include "News.h"
#include <string>
#include <vector>

using namespace std;

int main(){
    vector<News> v;
    string Theme, mes;
    News temp;
    for (int i = 0; i < 3; i++){
        cin >> Theme;
        getline(cin, mes);
        temp = News(Theme, mes);
        v.push_back(temp);
    }
    cout << "Number of unread: " << count(&v) << endl;
    v[0].Read();
    v[1].Read();

    cout <<endl <<"Number of unread: " << count(&v) << endl;
    v[2].get();
}
/*
1 qwerty
2 qweasdzxc
3 abcde
*/