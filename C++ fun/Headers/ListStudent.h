#include <iostream>
#include <string>
using namespace std;



struct Student
{
    public:
        std::string FIO;
        std::string BirthDate;
        int year;
        int value[5];
        Student *next;
        Student *prev;
    
    
    Student(string fio, string bd, int y){
        FIO = fio;
        BirthDate = bd;
        year = y;
    }
};

struct Course
{
    public:
    Course *next;
    Course *prev;
    Student *students;
    std::string name;
    int studentsOnTheCourse;
};

class List
{
    public:
    Course* head;
    Course* tail;
    int amountCourses;
    int amountStudents;

    List(){
        head = NULL;
        tail = NULL;
        amountCourses = 0;
    }
    void addCourse(string s){
        Course * temp = new Course;
        temp->next = NULL;
        temp->name = s;
        temp->prev = tail;
        if(tail != 0)
            tail->next = temp;
        if(amountCourses == 0)
            head = tail = temp;
        else
            tail = temp;
        amountCourses++;
        temp->students = NULL;
        amountCourses++;
    }
    void addStudent(Student st, string coursName){
        Course * course = head;
        while (course->name != coursName){
            course = course->next;
        }
        Student * newStudent = course->students;
        if (course->students == NULL){
            course->students = &st;
            st.prev = NULL;
            st.next = NULL;
        }
        else{
            while (newStudent->next != NULL){
                newStudent = newStudent->next;
            }
            newStudent->next = &st;  
            st.prev = newStudent;
            st.next = NULL;
        }

    }
    void printAllData(){
        Course * course = head;
        while (course->next != NULL){
            std::cout << course->name<< "\n";
            if (course->students == NULL){
                cout << "Empty\n";
                course = course->next;
                continue;
            } 
            Student * temp = course->students;
            course = course->next;
            while(temp->next != NULL){
                std::cout << temp->FIO << "\n";
                temp = temp->next;
            }
            std::cout << temp->FIO << "\n";
        }
        std::cout << course->name<< "\n"; 
        if (course->students == NULL){
            cout << "Empty\n";
            return;
        }
        Student * temp = course->students;
        course = course->next;
        while(temp->next != NULL){
            std::cout << temp->FIO << "\n";
            temp = temp->next;
        }
        std::cout << temp->FIO << "\n";
    }

    void sortStudents();
};