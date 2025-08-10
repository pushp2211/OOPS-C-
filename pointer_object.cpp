#include<iostream>
using namespace std;

class Cricketer {
public:
    string name;
    int age;
    int matches;

    Cricketer(string name, int age, int matches){
        this->name = name;  // 'this' pointer refers to the current object
        this->age = age;
        this->matches = matches;
    }
};

int main() {
    Cricketer c1("Sachin", 47, 463);
    Cricketer* p1= &c1;  // Pointer to Cricketer object

    cout<< "Age: " << (*p1).age << endl;  // Accessing member using pointer
    (*p1).age=77;  // Accessing member using dereferencing....(*) dereferences the pointer to access the object
    cout << "Age:"<<c1.age << endl;  // Displaying the updated age
    p1->age=84;
    cout << "Updated Age: " << p1->age << endl;  // Accessing member using pointer syntax
    return 0;
}