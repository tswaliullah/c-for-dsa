#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;

    string sw = s;

    reverse(s.begin(), s.end());

    int flag = 1;

    if (s != sw)
    {
        flag = 0;
    }

    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}