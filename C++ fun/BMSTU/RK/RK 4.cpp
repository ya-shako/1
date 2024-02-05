#include <iostream>
#include <vector>
#include <time.h>

using namespace std;

class A
{
    protected:
    vector<int> M;
    public:
    A(){
        srand(time(NULL));
        for(int i = 0; i < 5; i++){
            M.push_back(rand()%20 - 10);
        }
    }
     void Obr(){}
    void print(){
        Obr();
        for (int i : M){
            cout << i << " ";
        }
        cout << endl;
    }
};
class B : public A
{
    public:
    void Obr() {
        for (int i = 0; i < 5; i++){
            if (M[i] < 0) M[i] = 0;
        }
    }
};
class C : public A
{
    public:
    void Obr() {
        for (int i = 0; i < 5; i++){
            if (M[i] % 2 == 0) M[i] = 0;
        }
    }
};

int main(){
    A a;
    a = A();
    B b;
    b = B();
    C c;
    c = C();
    a.print();
    b.print();
    c.print();
}
