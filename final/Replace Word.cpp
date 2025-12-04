#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string s, x;
        cin >> s >> x;

        int index = s.find(x);
        int len = x.length();

        while (index != -1)
        {
            s.replace(index, len, "#");
            index = s.find(x, index + 1);
        }

        cout << s << endl;
    }

    return 0;
}