#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, q;
    vector<vector<vector<int>>> ans;
    
    vector<vector<int>> a;
    cin >> t;
    ans.resize(t);
    while(t > 0){
        cin >> n;
        a.clear(); a.resize(n);
        for (int i = 0; i < 2*n; i++){
            cin >> q;
            a[i%n].push_back(q);
        }
        sort(a.begin(), a.end());
        ans.push_back(a);
        t--;
    }
    for(vector<vector<int>> i : ans){
        for(vector<int> p : i){
            cout << p[0] << " ";
        }
        cout << endl;
        for(vector<int> p : i){
            cout << p[1] << " ";
        }
        cout << endl;
    }
}