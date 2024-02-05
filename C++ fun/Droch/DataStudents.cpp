#include <iostream>
#include "ListStudent.h"

using namespace std;

int main(){
    List Bamonka;
    Student Petya("Петя", "10", 1);
    Student Vasya("Вася", "11", 2);
    Student abitur("Маша", "12", 2);

    Bamonka.addCourse("IU");
    Bamonka.addStudent(Petya, "IU");
    Bamonka.addStudent(Vasya, "IU");
    Bamonka.addCourse("BMT");
    Bamonka.addCourse("SM");
    Bamonka.addStudent(abitur, "SM");
    Bamonka.addStudent(Petya, "SM");
    Bamonka.addStudent(Vasya, "SM");
    Bamonka.printAllData();

    
}