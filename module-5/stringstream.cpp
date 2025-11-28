#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    getline(cin, s);

    stringstream ss(s);

    string cutWord;

    while (ss >> cutWord)
    {
        cout << cutWord << endl;
    }

    /*
        ss >> cutWord;
        cout << cutWord << endl;

        ss >> cutWord;
        cout << cutWord << endl;

        ss >> cutWord;
        cout << cutWord << endl;

        ss >> cutWord;
        cout << cutWord << endl;

        ss >> cutWord;
        cout << cutWord << endl;

        ss >> cutWord;
        cout << cutWord << endl;

        ss >> cutWord;
        cout << cutWord << endl;
    
        */

    // cout << s << endl;

    return 0;
}