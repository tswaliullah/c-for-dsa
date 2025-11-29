#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    int a[t];

    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
    }

    reverse(a, a + t);

    for (int t : a)
    {
        cout << t << endl;
    }

    return 0;
}