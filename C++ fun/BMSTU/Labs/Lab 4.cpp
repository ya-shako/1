#include <iostream>
#include <vector>
#include <algorithm>
int main(){
    int q;
    std::vector<int> h;
    for (int i = 0; i < 5; i++){
        std::cin >> q;
        h.push_back(q);
    }
    std::vector<int>::iterator it;
    int max = *max_element(h.begin(), h.end());
    for(it = begin(h); *max_element(h.begin(), h.end()) == max; ++it){
        if (it == h.end()) it = h.begin();
        if (*it == max) h.erase(it);
    }

    for (it = begin(h); it != end(h); ++it){
        std::cout << *it << std::endl; 
    }
    
}