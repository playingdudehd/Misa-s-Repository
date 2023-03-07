#include <iostream>

using namespace std;

int overtimepay(int, int);
int basepay(int, int);
double comment();
double numhigh(int, int, int, int, int);
double numlow(int, int, int, int, int);
double averagescore(double, double, double, double, double, double, double);

int main()
{
    int hrs, overtime, pay = 15, overpay = 20, pay1, pay2 = 0, total;
    cout << "Please Enter how many hours you have worked this week: ";
    cin >> hrs;
    if (hrs > 40){
        overtime = hrs % 40;
        pay2 = overtimepay(overpay, overtime);
        hrs = hrs - overtime;
    }
    pay1 = basepay(pay, hrs);
    total = pay1 + pay2;
    cout << "Total Pay is: " << total;

    cout << endl;
    cout << "====================================================================" << endl;
    cout << endl;
    
    double a, b, c, d, e;
    double lownum, highnum;
    double score;
    a = comment();
    cout << "Judge Ones Score: " << a << endl;
    b = comment();
    cout << "Judge Twos Score: " << b << endl;
    c = comment();
    cout << "Judge Threes Score: " << c << endl;
    d = comment();
    cout << "Judge Fours Score: " << d << endl;
    e = comment();
    cout << "Judge Fives Score: " << e << endl;
    lownum = numlow(a, b, c, d, e);
    highnum = numhigh(a, b, c, d, e);
    
    score = averagescore(a, b, c, d, e, lownum, highnum);
    cout << "The Average Score Excluding the Highest Number and Lowest Number is: " << score << endl;




    return 0;
}

int basepay(int a, int b)
{
    return a * b;

}
int overtimepay(int b, int c)
{
    return b * c;
}
double comment(){
    double num;
    cout << "Please Enter a Score between 0-10: ";
    cin >> num;
    while(num < 0 || num > 10)
    {
        cout << "Number not accepted Try Again Please Enter a Score between 0-10: ";
        cin >> num;
    }
    return num;

}
double numlow(int a, int b, int c, int d, int e)
{
    if (a <= b && a <= c && a <= d && a <= e)
    {
        return a;
    }
    else if(b <= a && b <= c && b <= d && b <= e)
    {
        return b;
    }
    else if (c <= a && c <= b && c <= d && c <= e)
    {
        return c;
    }
    else if (d <= a && d <= b && d <= c && d <= e)
    {
        return d;
    }
    else if (e <= a && e <= b && e <= d && e <= c)
    {
        return e;
    }
    else
        return 0;
}
double numhigh(int a, int b, int c, int d, int e)
{
    if(a >= b && a >= c && a >= d && a >= e)
    {
        return a;
    }
    else if(b >= a && b >= c && b >= d && b >= e)
    {
        return b;
    }
    else if(c >= b && c >= a && c >= d && c >= e)
    {
        return c;
    }
    else if(d >= b && d >= c && d >= a && d >= e)
    {
        return d;
    }
    else if(e >= b && e >= c && e >= d && e >= a)
    {
        return e;
    }
    else
        return 0;
}
double averagescore(double a, double b, double c, double d, double e, double lownum, double highnum)
{
    double total;
    total = ((a + b + c + d + e) - (lownum + highnum)) / 3;
    return total;
}