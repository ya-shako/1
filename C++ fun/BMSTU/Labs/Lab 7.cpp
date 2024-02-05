#include <iostream>
#include <string>

class Fruit
{
    std::string name;
    float concetrate;
    
    float dailyNorm(){
        return 90/concetrate * 100;
    }
    public:
    Fruit(std::string n, float c){
        name = n;
        concetrate = c;
    }
    
    void print(){
        std::cout << "fruit name is: " << name << "\n";
        std::cout << "Concetrate of vitamine C is: " << concetrate << "mg / 100g\n";
        std::cout << "To reach daily norm of vitamin C you need to eat " << dailyNorm() << "g of this fruit";
    }
};


int main(){
    Fruit lemon("lemon", 50.5);
    lemon.print();
}