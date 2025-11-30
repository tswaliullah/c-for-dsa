#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;

    string rs = "EGYPT";
    

    int position = s.find(rs);

    s.replace(position, 5, " ");

    cout << s;

    return 0;
}