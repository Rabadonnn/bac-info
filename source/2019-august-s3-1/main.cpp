#include <iostream>

using namespace std;

unsigned int MaxImp(unsigned int a, unsigned int b)
{
    int result = 0;

    // interval [a, b]
    // inseamna ca parcurgem cu un for cu
    // i = a pana la i <= b

    for (int i = a; i <= b; i++)
    {
        // produsul se initializeaza mereu cu 1
        // (suma cu 0)
        int produs_divizori = 1;
        // initializam j cu 3 pentru ca
        // -> primul divizor -> 1 * produs_divizot care e 1 da tot 1
        // parcurgem pana la i / 2 pentru ca dupa nu mai avem divizori
        // mergem din 2 in 2 pentru a lua doar numerele impare
        // (3, 5, 7 ...)
        for(int j = 3; j <= i / 2; j += 2)
        {
            if (i % j == 0)
            {
                produs_divizori *= j;
            }
        }
        if (produs_divizori > i) 
        {
            result = i;
        }
    }

    return result;
}

int main()
{
    cout << "----- bac -----\n" << endl;

    cout << MaxImp(14, 19) << endl;

    cout << "\n----- END -----" << endl;
}
