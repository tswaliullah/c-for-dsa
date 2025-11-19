#include <bits/stdc++.h>
using namespace std;

int* p;
int* q;

void fun()
{
    int* y = new int;

    int x = 10;
    *y = 10;

    p = &x;
    q = y;

    cout << "Fun X " << *p << endl;
    cout << "Fun Y " << *q << endl;

    return;
}

int main()
{

    // int *p = new int;

    // *p = 1010;

    // cout << *p << endl;

    fun();

    cout << "Main X " << *p << endl;
    cout << "Main Y " << *q << endl;
    return 0;
}