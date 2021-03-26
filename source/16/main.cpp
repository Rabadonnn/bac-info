#include <iostream>

using namespace std;

struct medicament
{
    float pret;
    struct
    {
        int cod;
        int doza;
    } substanta;
} m[20];

int main()
{
    cout << "----- 2018-iulie-s2-1 -----\n" << endl;

    // rapsuns
    // c.
    m[0].substanta.cod;

    cout << "\n----- END -----" << endl;
}
