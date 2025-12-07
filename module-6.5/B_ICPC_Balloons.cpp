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

        string a;
        cin >> a;

        bool visited[26] = {false};

        int count_ballons = 0;

        for (int j = 0; j < n; j++)
        {
            char ch = a[j];
            int index = ch - 'A';

            if (visited[index] == false)
            {
                count_ballons += 2;
                visited[index] = true;
            }
            else
            {
                count_ballons++;
            }
        }

        cout << count_ballons << endl;
    }

    return 0;
}
