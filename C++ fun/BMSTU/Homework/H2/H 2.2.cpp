#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

vector<string> split(string, char );
int count(string, char);

int main(){
    string s;// = "aaaaaa bbbabb cdcccc qwrrty qwertd abcdef";
    getline(cin, s);
    vector<string> v = split(s, ' ');
    string answer = "";
    for (string i : v){
        if (count(i, 'a') + count(i, 'd') + count(i, 'e') > 0){
            answer += i + ' ';
        }
    }
    answer.erase(answer.length());
    cout << " Строка до исправления: " << s <<"\n";
    cout << " Строка после исправления: " << answer <<"\n";

    
}


vector<string> split(string s, char r){
    int count;
    vector<string> v {""};
    for (int i = 0; i < s.length(); i++){
        if (s[i] == r) {
            v.push_back("");
        }
    }
    count = 0;
    for (int i = 0; i < s.length(); i++){
        if (s[i] == r) count++;
        else v[count] += s[i];
    }
    return v;
}

int count(string s, char a){
    int c = 0;
    for (int i = 0; i < s.length(); i++){
        if (s[i] == a) c++;
    }
    return c;
}