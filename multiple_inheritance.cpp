#include<iostream>
using namespace std;

class Cricketer{
    public:
    int runs;
    int wickets;
    
};

class Engineer{
    public:
    int projects;
    int patents;
};

class phodu: public Cricketer, public Engineer { // Multiple inheritance
    public:
    int skills;
};


int main(){
    phodu p1;
    p1.runs = 1000;  // Accessing member from Cricketer class
    p1.wickets = 50; // Accessing member from Cricketer class
    p1.projects = 10; // Accessing member from Engineer class
    p1.patents = 5;   // Accessing member from Engineer class
    p1.skills = 3;    // Accessing member of phodu class

    cout << "Runs: " << p1.runs << endl;
    cout << "Wickets: " << p1.wickets << endl;
    cout << "Projects: " << p1.projects << endl;
    cout << "Patents: " << p1.patents << endl;
    cout << "Skills: " << p1.skills << endl;

    return 0;
}