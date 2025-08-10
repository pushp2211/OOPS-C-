#include<iostrem>
using namespace std;

class Scooty{
public:
      
    int speed;
    int price;
private:  // Private members cannot be accessed outside the class
    int bootspace;
};

// Inheritance from scooty class
class bike: public Scooty{
public:
    int gear;
};
class honda_bike:public bike{ //multilevel inheritance
public:
    int model;
};

}

int main(){
    bike b1;
    b1.speed = 80;  // Accessing public member from base class
    b1.price = 50000;  // Accessing public member from base class
    b1.gear = 5;  // Accessing member of derived class

    cout << "Speed: " << b1.speed << endl;
    cout << "Price: " << b1.price << endl;
    cout << "Gear: " << b1.gear << endl;

    return 0;
}