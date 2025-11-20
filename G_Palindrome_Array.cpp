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

    int left = 0, right = n - 1;
    int flag = 0;

    for (int i = 0; left > right; i++)
    {
        if (arr[left] != arr[right])
        {
            flag = 1;
            break;
        }
        left++;
        right--;
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