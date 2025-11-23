#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }

        int target = INT_MAX;
        for (int j = 0; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                int logic = a[j] + a[k] + k - j;
                if (target > logic)
                {
                    target = logic;
                }
            }
        }
        cout << target;
    }
    return 0;
}