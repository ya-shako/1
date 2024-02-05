#include <iostream>
#include <vector>
#include <string>

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

struct element
{
    string value;
    element *next;
    element *prev;
};

class List
{
    public:
    element* head;
    element* tail;
    int size;

    List(){
        head = NULL;
        tail = NULL;
        size = 0;
    }
    void addhead(string n){
        element* el = new element;
        el->prev = NULL;
        el->value = n;
        el->next = head;
        if (head != 0){
            head->prev = el;
        }
        if (size == 0){
            tail = head = el;
        }
        else{
            head = el;
        }
        size++;
    }
    void splited(string str, char r){
        vector<string> v;
        v =  split(str, r);
        for (int i = 0; i < v.size(); i++){
            addhead(v[i]);
        }
    }
    void solve(){
        element * el = head;
        while (el != NULL){
            el->value = to_string((el->value).size()) + el->value;
            el = el->next;     
        }
    }
    void print(){
        element * el = head;
        while (el->next != NULL){
            std::cout << el->value<< " ";
            el = el->next;     
        }
        if (size > 1) std::cout << el->value;
        else std::cout << el->value; 
    }
    void del(){
        element * el = head;
        while (el->next != NULL){
            el = el->next;     
            delete(el->prev);
        }
        delete(el);
    }

};