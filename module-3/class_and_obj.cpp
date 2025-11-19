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
    
    Student pias, mahdi;
    // pias.cgpa = 3.44;
    // pias.roll = 23;
    // char temp [100] = "Shakib";
    // strcpy(pias.name, temp);

    // cin >> pias.name >> pias.roll >> pias.cgpa;
    // cin >> mahdi.name >> mahdi.roll >> mahdi.cgpa;

    // cout << pias.name << " " << pias.roll << " " << pias.cgpa << endl;
    // cout << mahdi.name << " " << mahdi.roll << " " << mahdi.cgpa << endl;

    cin.getline(pias.name, 100);
    cin >> pias.roll >> pias.cgpa;

    cin.ignore(); // or getchar();
    cin.getline(mahdi.name, 100);
    cin >> mahdi.roll >> mahdi.cgpa;

    cout << pias.name << " " << pias.roll << " " << pias.cgpa << endl;
    cout << mahdi.name << " " << mahdi.roll << " " << mahdi.cgpa << endl;  

    
    return 0;
}