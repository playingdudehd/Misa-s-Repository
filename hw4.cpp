#include <iostream>
#include <string>

using namespace std;

int main()
{
    //int choice[6] = {1,2,3,4,5}
    string salsa[6] = {"mild", "medium", "sweet", "hot", "zesty"};
    int sold[5] = {0,0,0,0,0};
    int choice = 0;
    bool loops = true;
    for(int i = 0; i < 5; i++)
    {
        while(loops == true)
        {
            cout << "Please Enter how many jars where sold for ";
            cout << salsa[i] << "sauce: ";
            cin >> choice;
            if(choice >= 1 && choice <= 5)
            {
                loops = false;
                sold[i] = choice;
            }
            else
            {
                cout << "Thats not valid input. Try Again" << endl;
                loops = true;
            }
         
        }
    }

    return 0;
}