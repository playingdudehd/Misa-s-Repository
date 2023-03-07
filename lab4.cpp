#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, sum=0;
    
    while(a >= 0){
        cout << "Please enter a number to be added: ";
        cin >> a;
        sum = sum + a;
        cout << "The current sum is: " << sum << endl;
    }
    cout << endl;
    cout << "======================================================================" << endl;
    cout << endl;

    double calories, burnt = 3.6, b;
    int mul = 5, z=0;
    while(z <=10)
    {
        b = z * mul;
        if(z <= 5 || z >= 10)
        {
            calories = b * burnt;
            cout << "After " << b << " minutes you have burned " << calories << " calories." << endl;
        }
        z++;
    }
    cout << endl;
    cout << "======================================================================" << endl;
    cout << endl;

    int average, inp = 3, c, d, e;
    bool no = 1;
    string h;
    do
    {
        
        cout << "Please enter three numbers to take the average from:" << endl;
        cout << "Score 1: ";
        cin >> c;
        cout << "Score 2: ";
        cin >> d;
        cout << "Score 3: ";
        cin >> e;
        average = (c + d + e) / inp;
        cout << "The average is: " << average << endl;
        cout << endl;
        //cout << "Would you like to take the average again: ";
        //cin >> h;
        int z = 0;
        while(z < 1)
        {
            cout << "Would you like to take the average again: ";
            cin >> h;
            if(h == "N" || h == "No" || h == "n" || h == "no"){
                no = false;
                z = 1;
            }
            else if(h == "yes" || h == "Yes" || h == "y" || h == "Y")
            {
                no = true;
                z = 1;
            }
            else
            {
                z = 0;
            }
        }
        
    }
    while(no != 0);


    return 0;
}