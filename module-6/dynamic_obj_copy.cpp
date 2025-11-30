#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
public:
    string country;
    int jercey;

    Cricketer(string country, int jercey)
    {
        this->country = country;
        this->jercey = jercey;
    }
};

int main()
{

    Cricketer *dhoni = new Cricketer("India", 100);
    Cricketer *virat = new Cricketer("India", 90);


    // 1
    *virat = *dhoni;

    // 2
    virat->country = dhoni->country;
    virat->jercey = dhoni->jercey;


    delete dhoni;
   

    cout << virat->country << " " << virat->jercey << endl;

    return 0;
}