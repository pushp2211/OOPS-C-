#include<bits/stdc++.h>
using namespace std;

class Cricketer{
    public:
        string name;
        int runs;
   
        Cricketer(string name, int runs){
            this->name = name;  // 'this' pointer refers to the current object
            this->runs = runs;
        }
        void display() {  //can also use parameterised function
            cout << "Name: " << name << ", Runs: " << runs << endl;
        }
    };

    int main(){
        Cricketer c1("Sachin", 10000);
        //class can access its own members directly
        c1.display();  // Displaying the cricketer's details
        return 0;
    }



        