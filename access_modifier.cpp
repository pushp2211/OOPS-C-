#include<iostream>
using namespace std;

class Student{
    public:
    // Public members can be accessed outside the class
    int rno;
    int name;

    private:
    float marks;

    void display(){
        cout << "Roll No: " << rno << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
}

int main(){
    Student s1;
    s1.rno=101;
    s1.name="John";
    s1.marks=85.5;

    cout <<"marks: " << s1.marks << endl;  // This will not work as marks is private
    s1.display();  // This will not work as display() is private...when class private
}