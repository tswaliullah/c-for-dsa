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

        int s;
        cin >> s;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int flag = 0;

        for (int j = 0; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                for (int l = k + 1; l < n; l++)
                {
                    int sum = a[j] + a[k] + a[l];
                    if (sum == s)
                    {
                        flag = 1;
                    }
                }
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}