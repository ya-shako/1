#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

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

int main(){
    string line;
    ifstream fin;
    fin.open("F.txt");
    ofstream fout;
    fout.open("G.txt");
    fout.clear();
    while (getline(fin, line)){
        for (string i : split(line, ' ')){
            if (isupper(i[0])) fout << i << " ";
        }
    }
    fin.close();
    fout.close();
}