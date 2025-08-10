#include<iostream>
using namespace std;

class Loading{
    public:
    void load(int a){
        cout << "Loading integer: " << a << endl;
    }
    void load(double a){
        cout << "Loading double: " << a << endl;
    }
    void load(string a){
        cout << "Loading string: " << a << endl;
    }
    

};
int main(){
    Loading loader;
    loader.load(10);          // Calls load(int)
    loader.load(3.14);       // Calls load(double)
    loader.load("Hello");     // Calls load(string)

    return 0;
}