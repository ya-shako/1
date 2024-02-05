#include <iostream>

struct element
{
    int value;
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
    void append(int n){
        element* el = new element;
        el->next = NULL;
        el->value = n;
        el->prev = tail;
        if(tail != 0)
            tail->next = el;
        if(size == 0)
            head = tail = el;
        else
            tail = el;
        size++;
    }
    void addhead(int n){
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
    void insert(int n, int pos){
        element* temp = new element;
        if (pos == 0) {
            addhead(n);
            return;
        }
        else if (pos == size) {
            append(n);
            return;
        }
        element * el = head;
        for(int i = 0; i < pos-1; i++){
            el = el->next;
        }
        temp->prev = el;
        temp->next = el->next;
        temp->value = n;
        el->next = temp;
        el = temp->next;
        el->prev = temp;
    }
    int elem(int pos){
        element * el = head;
        for(int i = 0; i < pos; i++){
            el = el->next;
        }
        return el->value;
    }
    void print(){
        element * el = head;
        if (size > 1) {std::cout << "(";}
        while (el->next != NULL){
            std::cout << el->value<< ", ";
            el = el->next;     
        }
        if (size > 1) std::cout << el->value << ")";
        else std::cout << "(" << el->value<< ")"; 
    }
};