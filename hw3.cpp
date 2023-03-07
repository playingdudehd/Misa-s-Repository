#include <iostream>

using namespace std;

double fallingDistance(double);

int main()
{
    for(double x = 1; x <= 10; x++)
    {
       cout << "After " << x << " seconds" << " the object has fallen: " << fallingDistance(x) << " meters " << endl;
    }
    
    return 0;
}
double fallingDistance(double a)
{
    return .5 * 9.8 * a * a;
}
