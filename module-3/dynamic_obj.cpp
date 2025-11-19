#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        (*this).gpa = gpa;
    }
};

int main()
{

    Student rahim(1, 7, 5);
    Student *hussain = new Student(7, 7, 12);

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << hussain->roll << " " << hussain->cls << " " << hussain->gpa << endl;

    return 0;
}