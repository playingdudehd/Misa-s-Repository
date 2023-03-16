#include <iostream>
#include <string>

using namespace std;

int main()
{
    int stock = 1000;
    float price1 = 45.50;
    float commision = .02;

    float price2 = 56.90;

    cout << endl;
    cout << "Joe paid $" << stock * price1 << " for the stock" << endl;
    cout << "Joe paid his broker commision worth $" << (stock * price1) * commision << endl;
    cout << "Joe sold the stock for $" << stock * price2 << endl;
    cout << "Joe paid his broker commision after he sold it worth $" << (stock * price2) * commision << endl;
    cout << "Joes profit is: $" << ((stock * price2)-(stock * price1)-((stock * price2)*commision)- ((stock * price1)*commision)) << endl;
    return 0;
}