
//Question 14:Write a function that accepts an int array and the array's size as arguments. 
//The function should create a copy of the array, except that the element values should be reversed in the copy. 
//The function should return a pointer to the new array. Demonstrate the function in a complete program. 
//Note:-Take the user input for array size and array elements.
#include <iostream>

using namespace std;


int * reverse(int list[], int num)
{
    int *r = new int[num];
    int end = num - 1;
    int var;
    for(int start = 0; start < num; start++)
    {
        var = list[end];
        r[start] = var;
        end = end - 1;    
    }

    int* p = r;
    for(int x = 0; x < num; x++)
    {
        cout << " " << *(p + x);
    }
    
    return p;
}

int main()
{
    int num;
    int var;

    cout << "Please Enter the size of the array: ";
    cin >> num;
    int list[num];
    for(int x = 0; x < num; x++)
    {
        cout << "Please Enter variable #" << x + 1 << ": ";
        cin >> var;
        list[x] = var;
    }
    int *p = reverse(list, num);

    cout << endl;
    cout << "The reversed array is: " << endl;
    for(int x = 0; x < num; x++)
    {
        cout << p[x] << " ";
        
    }

    return 0;
}