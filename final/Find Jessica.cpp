#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    getline(cin, s);

    string targetString = "Jessica";

    stringstream ss(s);

    string nWorld;

    int flag = 0;

    while (ss >> nWorld)
    {
        if (targetString == nWorld)
        {
            flag = 1;
        }
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