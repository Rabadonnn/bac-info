#include <iostream>

using namespace std;

struct procesor
{
    char producator;
    unsigned int frecventa;
    float pret;
};

int main()
{
    cout << "----- 2020-august-s2-2 -----\n" << endl;

    procesor p = { 'A', 10, 104.3 };

    cout << p.producator << endl;
    cout << p.frecventa << endl;
    cout << p.pret << endl;

    cout << "\n----- END -----" << endl;
}
