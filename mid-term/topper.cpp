#include <bits/stdc++.h>
#include <strings.h>
using namespace std;

class Student
{
public:
    int ID;
    char name[101];
    char section[4];
    int totalMarks;

    Student(int ID, char name[101], char section[4], int totalMarks)
    {
        this->ID = ID;
        strcpy(this->name, name);
        strcpy(this->section, section);
        this->totalMarks = totalMarks;
    }
};

int main()
{

    Student s1(3, "Atik", "A", 33);
    Student s2(2, "Milon", "B", 55);
    Student s3(1, "Siam", "T", 55);

    Student topper = s1;

    if (topper.totalMarks < s2.totalMarks)
    {
        topper = s2;
    }
    else if (topper.totalMarks == s2.totalMarks)
    {
        if (topper.ID < s2.ID)
        {
            topper = topper;
        }
        else
        {
            topper = s2;
        }
    }

    if (topper.totalMarks < s3.totalMarks)
    {
        topper = s3;
    }
    else if (topper.totalMarks == s3.totalMarks)
    {
        if (topper.ID < topper.ID)
        {
            topper = topper;
        }
        else
        {
            topper = s3;
        }
    }

    cout << topper.name;

    // else if (s2.totalMarks > s1.totalMarks && s2.totalMarks > s3.totalMarks)
    // {
    //     cout << s2.name;
    // }
    // else
    // {
    //     cout << s3.name;
    // }

    return 0;
}