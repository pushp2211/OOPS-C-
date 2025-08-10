#include<iostream>
using namespace std;
class Student{ //student is new data type
public:        //access modifier
    string name;
    int rno;
    float gpa;

    //constructor to initialize student details
    Student(string n, int r, float g) {
        name = n;
        rno = r;
        gpa = g;
    }
};

void printStudent(Student s){ //function to print student details
    cout<<"Name: "<<s.name<<endl;
    cout<<"Roll No: "<<s.rno<<endl;
    cout<<"GPA: "<<s.gpa<<endl;
}

int main(){
   Student s1("Pushpraj", 47, 7.4);  //object s1 with initialization
 
   Student s2("Anshika", 48, 8.1);  //object s2 with initialization

    printStudent(s1); //calling function to print details of s1
    printStudent(s2); 
}