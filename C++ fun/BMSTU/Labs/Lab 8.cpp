#include <iostream>
#include <string>
using namespace std;
class Person
{
    protected:
    std::string name;
    int birthYear;
    public:
    Person(std::string n, int b){
        name = n;
        birthYear = b;
    }
    int getOld(){
        return 2023 - birthYear;
    }
    void print(){
        std::cout << "person name is " << name << "\n";
        std::cout << name << " is " << getOld() << " years old\n";
    }
};
class Driver : public Person
{
    int yearOfGetRights;
    public:
    Driver(std::string n, int b, int y) : Person(n, b){
        yearOfGetRights = y;
    }
    int stage(){
        return -1*(birthYear - yearOfGetRights);
    }
    int oldWhenGet(){
        return getOld() - stage();
    }
    void print(){
        std::cout << "driver name is " << name << "\n";
        std::cout << name << " is " << getOld() << " years old\n";
        std::cout << name << " gets his rights when he was " << oldWhenGet() << " years old\n";
        std::cout << "His stage is " << stage() << " years\n";
    }
};

int main(){
    Person Bob("Bob", 2000);
    Driver Tom("Tom", 1990, 2010);

    Tom.print();
    Bob.print();
}