#include <bits/stdc++.h>
using namespace std;


class Student {

    public:
        char name[100];
        int roll;
        double cgpa;
};

int main()
{
    
    Student pias, juli;
    // pias.cgpa = 3.44;
    // pias.roll = 23;
    // char temp [100] = "Shakib";
    // strcpy(pias.name, temp);

    // cin >> pias.name >> pias.roll >> pias.cgpa;
    // cin >> juli.name >> juli.roll >> juli.cgpa;

    // cout << pias.name << " " << pias.roll << " " << pias.cgpa << endl;
    // cout << juli.name << " " << juli.roll << " " << juli.cgpa << endl;

    cin.getline(pias.name, 100);
    cin >> pias.roll >> pias.cgpa;

    cout << pias.name << " " << pias.roll << " " << pias.cgpa << endl;

    
    return 0;
}