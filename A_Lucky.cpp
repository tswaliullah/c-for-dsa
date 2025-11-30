#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string a;
        cin >> a;

        int firstSum = a[0] + a[1] + a[2];
        int lastSum = a[3] + a[4] + a[5];


        if (firstSum == lastSum)
        {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        

    }
    
    
    return 0;
}