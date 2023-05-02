//Q15. Write a program that uses a structure to store the following weather data for a particular month:
//Total Rainfall
//High Temperature
//Low Temperature
//Average Temperature
//The program should have an array of 12 structures to hold weather data for an entire year. 
//When the program runs, it should ask the user to enter data for each month. 
//(The average temperature should be calculated.) Once the data are entered for all the months, 
//the program should calculate and display the average monthly rainfall, the total rainfall for the year,
//the highest and lowest temperatures for the year (and the months they occurred in),
//and the average of all the monthly average temperatures.
//Input Validation: Only accept temperatures within the range between –100 and +140 degrees Fahrenheit.
#include <iostream>
#include <string>

using namespace std;

struct {

    int totalR;
    int avgT;
    int highT;
    int lowT;
}Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void bubbleSort(int arr[], int n)
{
   int i, j;
   bool swapped;
   for (i = 0; i < n-1; i++)
   {
     swapped = false;
     for (j = 0; j < n-i-1; j++)
     {
        if (arr[j] > arr[j+1])
        {
           swap(&arr[j], &arr[j+1]);
           swapped = true;
        }
     }
 
     if (swapped == false)
        break;
   }
}
 
int main()
{
    int r, a, h, l;
    bool next = false;

    cout << "Input January's total rain:";
    cin >> r;
    while(next == false)
    {
        cout << "Input January's Highest Temp:";
        cin >> h;
        cout << "Input January's Lowest Temp:";
        cin >> l; 
        if(h < -100 || h > 140 || l < -100 || l > 140)
        {
            next = false;
        }
        else
        {
            next = true;
        }
    }
    a = (h +l) / 2;
    cout << "==========================================================================";
    next = false;
    Jan.totalR = r;
    Jan.avgT = a;
    Jan.highT = h;
    Jan.lowT = l;

    cout << "Input February's total rain:";
    cin >> r;
    while(next == false)
    {
        cout << "Input February's Highest Temp:";
        cin >> h;
        cout << "Input February's Lowest Temp:";
        cin >> l;
        if(h < -100 || h > 140 || l < -100 || l > 140)
        {
            next = false;
        }
        else
        {
            next = true;
        }  
    }
    a = (h +l) / 2;
    cout << "==========================================================================";
    next = false;
    Feb.totalR = r;
    Feb.avgT = a;
    Feb.highT = h;
    Feb.lowT = l;

    cout << "Input March's total rain:";
    cin >> r;
    while(next == false)
    {
        cout << "Input March's Highest Temp:";
        cin >> h;
        cout << "Input March's Lowest Temp:";
        cin >> l;  
        if(h < -100 || h > 140 || l < -100 || l > 140)
        {
            next = false;
        }
        else
        {
            next = true;
        }
    }
    a = (h +l) / 2;
    cout << "==========================================================================";
    next = false;
    Mar.totalR = r;
    Mar.avgT = a;
    Mar.highT = h;
    Mar.lowT = l;

    cout << "Input April's total rain:";
    cin >> r;
    while(next == false)
    {
        cout << "Input April's Highest Temp:";
        cin >> h;
        cout << "Input April's Lowest Temp:";
        cin >> l;  
        if(h < -100 || h > 140 || l < -100 || l > 140)
        {
            next = false;
        }
        else
        {
            next = true;
        }
    }
    a = (h +l) / 2;
    cout << "==========================================================================";
    next = false;
    Apr.totalR = r;
    Apr.avgT = a;
    Apr.highT = h;
    Apr.lowT = l;

    cout << "Input May's total rain:";
    cin >> r;
    while(next == false)
    {
        cout << "Input May's Highest Temp:";
        cin >> h;
        cout << "Input May's Lowest Temp:";
        cin >> l; 
        if(h < -100 || h > 140 || l < -100 || l > 140)
        {
            next = false;
        }
        else
        {
            next = true;
        } 
    }
    a = (h +l) / 2;
    cout << "==========================================================================";
    next = false;
    May.totalR = r;
    May.avgT = a;
    May.highT = h;
    May.lowT = l;

    cout << "Input June's total rain:";
    cin >> r;
    while(next == false)
    {
        cout << "Input June's Highest Temp:";
        cin >> h;
        cout << "Input June's Lowest Temp:";
        cin >> l;  
        if(h < -100 || h > 140 || l < -100 || l > 140)
        {
            next = false;
        }
        else
        {
            next = true;
        }
    }
    a = (h +l) / 2;
    cout << "==========================================================================";
    next = false;
    Jun.totalR = r;
    Jun.avgT = a;
    Jun.highT = h;
    Jun.lowT = l;

    cout << "Input July's total rain:";
    cin >> r;
    while(next == false)
    {
        cout << "Input July's Highest Temp:";
        cin >> h;
        cout << "Input July's Lowest Temp:";
        cin >> l;  
        if(h < -100 || h > 140 || l < -100 || l > 140)
        {
            next = false;
        }
        else
        {
            next = true;
        }
    }
    a = (h +l) / 2;
    cout << "==========================================================================";
    next = false;
    Jul.totalR = r;
    Jul.avgT = a;
    Jul.highT = h;
    Jul.lowT = l;

    cout << "Input August's total rain:";
    cin >> r;
    while(next == false)
    {
        cout << "Input August's Highest Temp:";
        cin >> h;
        cout << "Input August's Lowest Temp:";
        cin >> l;
        if(h < -100 || h > 140 || l < -100 || l > 140)
        {
            next = false;
        }
        else
        {
            next = true;
        }  
    }
    a = (h +l) / 2;
    cout << "==========================================================================";
    next = false;
    Aug.totalR = r;
    Aug.avgT = a;
    Aug.highT = h;
    Aug.lowT = l;

    cout << "Input September's total rain:";
    cin >> r;
    while(next == false)
    {
        cout << "Input September's Highest Temp:";
        cin >> h;
        cout << "Input September's Lowest Temp:";
        cin >> l;
        if(h < -100 || h > 140 || l < -100 || l > 140)
        {
            next = false;
        }
        else
        {
            next = true;
        }  
    }
    a = (h +l) / 2;
    cout << "==========================================================================";
    next = false;
    Sep.totalR = r;
    Sep.avgT = a;
    Sep.highT = h;
    Sep.lowT = l;

    cout << "Input October's total rain:";
    cin >> r;
    while(next == false)
    {
        cout << "Input October's Highest Temp:";
        cin >> h;
        cout << "Input October's Lowest Temp:";
        cin >> l; 
        if(h < -100 || h > 140 || l < -100 || l > 140)
        {
            next = false;
        }
        else
        {
            next = true;
        } 
    }
    a = (h +l) / 2;
    cout << "==========================================================================";
    next = false;
    Oct.totalR = r;
    Oct.avgT = a;
    Oct.highT = h;
    Oct.lowT = l;

    cout << "Input November's total rain:";
    cin >> r;
    while(next == false)
    {
        cout << "Input November's Highest Temp:";
        cin >> h;
        cout << "Input November's Lowest Temp:";
        cin >> l;  
        if(h < -100 || h > 140 || l < -100 || l > 140)
        {
            next = false;
        }
        else
        {
            next = true;
        }
    }
    a = (h +l) / 2;
    cout << "==========================================================================";
    next = false;
    Nov.totalR = r;
    Nov.avgT = a;
    Nov.highT = h;
    Nov.lowT = l;

    cout << "Input December's total rain:";
    cin >> r;
    while(next == false)
    {
        cout << "Input December's Highest Temp:";
        cin >> h;
        cout << "Input December's Lowest Temp:";
        cin >> l;
        if(h < -100 || h > 140 || l < -100 || l > 140)
        {
            next = false;
        }
        else
        {
            next = true;
        }  
    }
    a = (h +l) / 2;
    cout << "==========================================================================";
    next = false;
    Dec.totalR = r;
    Dec.avgT = a;
    Dec.highT = h;
    Dec.lowT = l;

    int total, avgyearr, avgyeart;
    total = Jan.totalR + Feb.totalR + Mar.totalR + Apr.totalR + May.totalR + Jun.totalR + Jul.totalR + Aug.totalR + Sep.totalR + Oct.totalR + Nov.totalR + Dec.totalR;
    avgyearr = total / 12;
    avgyeart = Jan.avgT + Feb.avgT + Mar.avgT + Apr.avgT + May.avgT + Jun.avgT + Jul.avgT + Aug.avgT + Sep.avgT + Oct.avgT + Nov.avgT + Dec.avgT;
    avgyeart = avgyeart / 12;

    cout << endl;
    cout << endl;
    cout << "The total rainfall for the year is: " << total << endl;
    cout << "The Average rainfall per month is: " << avgyearr << endl;
    cout << "The Average temp per month is: " << avgyeart << endl;

    int monthlow[12];
    int x = 0;
    monthlow[x] = Jan.lowT;
    x++;
    monthlow[x] = Feb.lowT;
    x++;
    monthlow[x] = Mar.lowT;
    x++;
    monthlow[x] = Apr.lowT;
    x++;
    monthlow[x] = May.lowT;
    x++;
    monthlow[x] = Jun.lowT;
    x++;
    monthlow[x] = Jul.lowT;
    x++;
    monthlow[x] = Aug.lowT;
    x++;
    monthlow[x] = Sep.lowT;
    x++;
    monthlow[x] = Oct.lowT;
    x++;
    monthlow[x] = Nov.lowT;
    x++;
    monthlow[x] = Dec.lowT;
    bubbleSort(monthlow, 12);

    cout << "The lowest temperature Recorded was: " << monthlow[0] << endl;

    int monthhi[12];
    x = 0;
    monthhi[x] = Jan.highT;
    x++;
    monthhi[x] = Feb.highT;
    x++;
    monthhi[x] = Mar.highT;
    x++;
    monthhi[x] = Apr.highT;
    x++;
    monthhi[x] = May.highT;
    x++;
    monthhi[x] = Jun.highT;
    x++;
    monthhi[x] = Jul.highT;
    x++;
    monthhi[x] = Aug.highT;
    x++;
    monthhi[x] = Sep.highT;
    x++;
    monthhi[x] = Oct.highT;
    x++;
    monthhi[x] = Nov.highT;
    x++;
    monthhi[x] = Dec.highT;
    bubbleSort(monthhi, 12);
    cout << "The highest Temperature Recorde is: " << monthhi[12] << endl;

    return 0;
}
