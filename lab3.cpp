#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Please enter a number to check if its odd or even: ";
    cin >> num;

    if(num % 2 == 0)
    {
        cout << "The number is even" << endl;
    }
    else
    {
        cout << "The number is odd" << endl;
    }

cout << "============================================================================" << endl;

float x;
float avg;
for(int z = 1; z <= 100; z++)
    {
        x = x + z;
    }
avg = x / 100;
cout << "After adding the first 100 natural numbers I got " << x << endl;
cout << "The average of those numbers is " << avg << endl;

cout << "============================================================================" << endl;

int a, b, c;
cout << "Please input three numbers" << endl;
cout << "Number 1: ";
cin >> a;
cout << "Number 2: ";
cin >> b;
cout << "Number 3: ";
cin >> c;

if(a > b && a > c)
{
    cout << "The largest number is: " << a << endl;
}
else if(b > a && b > c)
{
    cout << "The largest number is: " << b << endl;
}
else
{
    cout << "The largest number is: " << c << endl;
}

if(a < b && a < c){
    cout << "The smallest number is: " << a << endl;
}
else if(b < a && b < c){
    cout << "The smallest number is: " << b << endl;
}
else{
    cout << "The smallest number is: " << c << endl;
}
    return 0;
}