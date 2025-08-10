#include<iostream>
using namespace std;
class Student{ //student is new data type
public:        //access modifier
    string name;
    int rno;
    float gpa;
};

void printStudent(Student s){ //function to print student details
    cout<<"Name: "<<s.name<<endl;
    cout<<"Roll No: "<<s.rno<<endl;
    cout<<"GPA: "<<s.gpa<<endl;
}
int main(){
   Student s1;  //object s

    //initialisation 

   s1.name="Pushpraj";
   s1.rno=47;
   s1.gpa=7.4; 

   Student s2;  //object s2
    s2.name="Anshika";
    s2.rno=48;
    s2.gpa=8.1;

   Student s3;  //object s3
    s3.name="Ansh";
    s3.rno=49;
    s3.gpa=8.1;

    printStudent(s1); //calling function to print details of s1
    printStudent(s2); 
    printStudent(s3); 
}