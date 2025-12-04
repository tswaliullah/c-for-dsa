#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;

    int e_count = 0, g_count = 0, y_count = 0, p_count = 0, t_count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        if (ch == 'e' || ch == 'E')
        {
            e_count++;
        }
        else if (ch == 'g' || ch == 'G')
        {
            g_count++;
        }
        else if (ch == 'y' || ch == 'Y')
        {
            y_count++;
        }
        else if (ch == 'p' || ch == 'P')
        {
            p_count++;
        }
        else if (ch == 't' || ch == 'T')
        {
            t_count++;
        }
    }


    cout << min({e_count, g_count, y_count, p_count, t_count});

    return 0;
}