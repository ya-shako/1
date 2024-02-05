#include <iostream>
#include <vector>
#include <algorithm>

int binSearch(std::vector<long long>* v, long long n){
    int r = (*v).size()-1, l = 0, m;
    while (r - l > 1){ 
        m = (r+l)/2;
        if ((*v)[m] < n) l = m + 1;
        else if ((*v)[m] > n) r = m - 1;
        else return m;
    }
    if ((*v)[l] == n) return l;
    else if ((*v)[r] == n) return r;
    else return -1;
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
    int a, b, s;
    for (long long i = 0; i < m; i++){
        if (binSearch(&v1, v2[i]) == -1) std::cout << "0\n";
        else {
            a = b = s = binSearch(&v1, v2[i]);
            while (a - 1 > -1 && v1[a-1] == v1[s]) a--;
            while (b + 1 < n && v1[b+1] == v1[s]) b++;
            std::cout << a+1 << " " << b+1 << "\n";
        }
    }
    return 0;    
}
    