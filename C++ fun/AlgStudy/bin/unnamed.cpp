#include <bits/stdc++.h>
using namespace std;




int main(){
    int t, n, m;
    vector<int> v;
    cin >> t;
    while(t > 0){
        cin >> n >> m;
        v.push_back(n*(m/2));
        t--;      
    }
    for(int i: v){
        cout << i << endl;
    }
}