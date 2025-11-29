#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    getline(cin, s);
    stringstream ss(s);
    string nw;

    ss >> nw;
    reverse(nw.begin(), nw.end());
    cout << nw;

    while (ss >> nw)
    {
        reverse(nw.begin(), nw.end());
        cout << " " << nw;
    }

    return 0;
}