#include <iostream>
#include <vector>

using namespace std;
int solve(int m, int n){
    if (n >0) return m;
    return n*(m/n) + solve(n, m%n);
}
int main(){
    int m, n, t;
    cin >> t;
    vector<int> ans;
    for (int i = 0; i < t; i++){
        cin >> m >> n;
        if (m < n) swap(m, n);
        ans.push_back(solve(m, n));
    }
    for (int i = 0; i < t; i++){
        cout << ans[i] << endl;
    } 
}