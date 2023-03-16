#include <iostream>

using namespace std;

int * newlist(int a[], len)
{
    static int b[len + 1];
    int b[0] = 0;
    for(int x = 1; x <= len + 1; x++){
        b[x] = a[x - 1];

        return b;
    }


}

int main()
{
    int *b;
    int a[6] = {1, 2, 3, 4, 5, 6};
    len = sizeof(a) / sizeof(a[0]);
    newlist(a, len);

    return 0;
}