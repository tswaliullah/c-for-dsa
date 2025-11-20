#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int l = 0, r = n - 1;
    int flag = 1;

    for (int i = 0; l < r; i++)
    {
        
        if ( arr[l] != arr[r] )
        {
            flag = 0;
            break;
        }

        l++;
        r--;
    }

    if (flag)
    {
        cout << "YES";
    } else
    {
        cout << "NO";
    }
    

    return 0;
}