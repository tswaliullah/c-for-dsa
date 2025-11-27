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

        long long int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }

        long long int target = INT_MAX;
        for (int j = 0; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                long long int logic = a[j] + a[k] + k - j;
                if (target > logic)
                {
                    target = logic;
                }
            }
        }
        cout << target << endl;
    }
    return 0;
}