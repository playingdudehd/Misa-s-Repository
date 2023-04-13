#include <iostream>
#include <string>

using namespace std;

class Car
{
    public:
    int yearModel;
    string make;
    int speed;
    Car(int z, string y, int x){
        yearModel = x;
        make = y;
        speed = z;

    }
};


void accelerate(int *a)
{

    for(int x = 0; x < 5; x++)
    {
        *a += 5;
        cout << "After accelerating by 5, the current speed is: " << *a << endl;

    }

}

void brake(int *a)
{

    for(int x = 0; x < 5; x++)
    {
        *a -= 5;
        cout << "After subtracting 5, the current speed is: " << *a << endl;
    }
}

int main()
{
    Car car1(0 ,"Toyota", 2013);

    accelerate(&car1.speed);
    cout << "The cars make is " << car1.make << ", year is " << car1.yearModel << ", the current speed is " << car1.speed << endl;
    brake(&car1.speed);
    cout << "The cars make is " << car1.make << ", year is " << car1.yearModel << ", the current speed is " << car1.speed << endl;

    return 0;

}