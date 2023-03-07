#include <iostream>
#include <string>
#include <fstream>


using namespace std;

int sum(int arr[])
{
    int a;
    for (int i = 0; i < 5; i++)
    {
        a = a + arr[i];
    }
    return a;
}
int average(int x)
{
    return x / 5;
}

void files1(int x, int y)
{
    ofstream file;
    file.open("write.txt", ios_base::app);
    file << "Player " << y << "'s Avg Score: " << x << endl;

    file.close();

}
void show(int a[], string b[])
{
    cout << "Welcome to my shop" << endl;
    for(int i = 0; i < 6; i++)
    {
        cout << a[i] << ": " << b[i] << endl;
    }
    

}
int addi(int x, int a[], string b[])
{
    int price[] = {10, 8, 6, 4, 2, 0};
    return price[x - 1];
}
void inputfile(int a[], string b[], int c[])
{

    for(int i = 0; i < 5; i++)
    {

        ofstream files;
        //fstream files("price.txt");
        files.open("price.txt", ios_base::app);
        if(files.fail()){
            cout << "file did not open.";
        }
        else{
            files << "Total Number of Sales for Items sold for " << b[i] << " is " << a[i] << " and total amount collected is " << c[i] << endl;
            files.close();
        }
    }
}

int main()
{
    int season1[] = {1, 2, 3, 4, 5}; int season2[] = {2,3,4,5,6}; int season3[] = {10,2,3,5,8}; int season4[] = {9,2,1,8,3}; int season5[] = {9,2,1,8,3};
    int a, b, c, d, e, a1, b1, c1, d1, e1;
    a = sum(season1);
    b = sum(season2);
    c = sum(season3);
    d = sum(season4);
    e = sum(season5);
    
    a1 = average(a);
    b1 = average(b);
    c1 = average(c);
    d1 = average(d);
    e1 = average(e);

    files1(a1, 1);
    files1(b1, 2);
    files1(c1, 3);
    files1(d1, 4);
    files1(e1, 5);

    cout << "===========================================================";
    cout << endl;
    bool loops1 = true;
    int storenum[] = {1, 2, 3, 4, 5, 6};
    string store[] = {"Pen", "Pencil", "Eraser", "Tape", "StickyNotes", "Exit"};
    int total[] = {0,0,0,0,0,0};
    int amount[] = {0,0,0,0,0,0};
    int choice;
    
    while (choice != 6)
    {
        while(loops1 == true)
        {
            
            show(storenum, store);
            cout << "Please Enter your Choice: ";
            cin >> choice;
            if(choice > 0 && choice <= 6)
            {
                loops1 = false;
                amount[choice - 1] = amount[choice - 1] + 1;
                total[choice - 1] = total[choice - 1] + addi(choice, storenum, store);
            }
            else
            {
                cout << "Wrong input Try again" << endl;
            }
        }
        
        loops1 = true;
    }
    inputfile(amount, store, total);
    cout << "Sales Report Generated Successfully" << endl;
    


    return 0;
}