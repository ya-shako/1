#include <iostream>
#include <string>
#include <vector>
using namespace std;

int check(int a, int b, int c){
    if ((a-b)%2==0) return 1;
    return 0;
}

int main(){
    string s;
    int len;
    int n, a, b, c;
    vector<int> ans;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a >> b >> c;
        ans.push_back(check(b,c,a));
        ans.push_back(check(a,c,b));
        ans.push_back(check(a,b,c));
    }
    for (int i = 0; i < n*3; i += 3){
        cout << ans[i] << " " << ans[i+1] << " " <<ans[i+2] <<"\n";
    }
}