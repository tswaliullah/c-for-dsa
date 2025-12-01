#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    long long int id;
    int cls;
    string nm;
    string s;
    int eng_marks;
    int math_marks;
};

bool cmp(Student l, Student r)
{

    if (l.eng_marks != r.eng_marks)
    {
        return l.eng_marks > r.eng_marks;
    }
    else if (l.math_marks != r.math_marks)
    {
        return l.math_marks > r.math_marks;
    }
    else
    {
        return l.id < r.id;
    }
}

int main()
{
    int n;
    cin >> n;

    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
    }

    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
    }

    return 0;
}