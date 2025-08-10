#include<iostream>
using namespace std;

class Cricketer{
    public:
        string name;
        int runs;

        // Cricketer(string n, int r){  //problematic constructor
        //     name=n;
        //     runs=r;
        // }

        //use of this pointer
        Cricketer(string name, int runs){
            this->name = name;  // 'this' pointer refers to the current object
            this->runs = runs;
        }
};

int main(){
    Cricketer c1("Sachin", 10000);

    cout<<"Name: " << c1.name << endl;
}