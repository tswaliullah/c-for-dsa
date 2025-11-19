#include <bits/stdc++.h>
using namespace std;

int* fun(){
    int * a = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    return a;
}

int main()
{
    int * a = new int[3];

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    int* b = new int[5];

    for (int i = 0; i < 5; i++)
    {
        b[i] = a[i];
    }
    
    b[3] = 1;
    b[4] = 9;

    delete[] a;

    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}