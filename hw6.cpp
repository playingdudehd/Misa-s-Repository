#include <iostream>

using namespace std;

int doSomething(int x, int y)
{
    int temp = x;
    x = y * 10;
    y = temp * 10;
    return x + y;
}

int doSomethingRef(int& a, int& b)
{
    int temp = a;
    a = b * 10;
    b = temp * 10;
    return a + b;
}
void doSomethingPoint(int *a, int *b)
{
    int* x;
    x = a;
    int* y;
    y = b;
    int ten = 10;
    int temp;
    temp = *a;
    *x = *y * ten;
    *y = temp * ten;
    return;
}

int main()
{
    int w = 5, z = 10;
    int pri;
    pri = doSomething(w, z);
    cout << pri;
    cout << endl;
    pri = doSomethingRef(w, z);
    cout << pri;
    cout << endl;
    int t = 5, y = 10;
    doSomethingPoint(&t, &y);
    pri = t + y;
    cout << pri;

    return 0;
}