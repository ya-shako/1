#include <iostream>
#include <vector>
#include <algorithm>

int binSearch(std::vector<long long>* v, long long n){
    int r = (*v).size()-1, l = 0, m;
    while (r - l > 0){ 
        m = (r+l)/2;
        if ((*v)[m] < n) l = m+1;
        else if ((*v)[m] > n) r = m-1;
        else return (*v)[m];
    }
    if (std::abs((*v)[l] - n) > std::abs((*v)[r] - n)) return (*v)[r];
    else return (*v)[l];
}

int main(){
    long long n, m, q;
    std::cin >> n >> m; 
    std::vector<long long> v1, v2;
    for (long long i = 0; i < n; i++){
        std::cin >> q;
        v1.push_back(q); 
    }

    for (long long i = 0; i < m; i++){
        std::cin >> q;
        v2.push_back(q); 
    }

    for (long long i = 0; i < m; i++){

        std::cout << binSearch(&v1,v2[i]) << "\n"; 
    }
    return 0;
}