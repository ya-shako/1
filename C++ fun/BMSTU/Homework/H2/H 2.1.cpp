#include <iostream>

void sort(char** a, int s){
    for (int i = 0; i < s; i++){
        for (int j = i; j < s; j++){
            if ((*a)[i] > (*a)[j]) std::swap((*a)[j], (*a)[i]);
        }      
    }
}

int main(){
    int n;
    char q;
    std::cin >> n;
    char* arr = new char [n];
    for (int i = 0; i < n; i++){
        std::cin >> q;
        arr[i] = q;
    }
    sort(&arr, n-1);
    for (int i = 0; i < n; i++){
        std::cout << arr[i] << " ";
    }
}