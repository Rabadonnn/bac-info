#include <iostream>
#include <fstream>

using namespace std;

/*
 * Un vector poate fi palindrom doar daca
 * fiecare numar din el se gaseste de un numar impar de ori
 * putand fi o singura exceptie (numarul din mijloc)
 * daca 2 sau mai multe numere se gasesc de un numar impar de ori atunci
 * vectorul nu mai poate fi plaindrom
 */

int main()
{
    cout << "-----\nbac\n-----\n" << endl;

    // if you want to compile this on your machine
    // remove "source/2020-s3-3/" from path
    ifstream bac_in("source/2020-s3-3/bac.in");

    int ar[1000000];


    // vector de frecventa
    // cauta teoria
    int occurrences[1000];

    int x;
    int max_n = 0;
    while (bac_in >> x)
    {
        if (x > max_n)
        {
            max_n = x;
        }
        occurrences[x]++;
    }

    int odd_occurences = 0;

    for (int i = 0; i < max_n; i++)
    {
        if (occurrences[i] % 2 == 1)
        {
            odd_occurences++;
            if (odd_occurences > 1)
            {
                // keyword break termina forul
                // optimization
                break;
            }
        }
    }

    if (odd_occurences > 1)
    {
        cout << "NU" << endl;
    }
    else
    {
        cout << "DA" << endl;
    }

    bac_in.close();

    cout << "\n----- END -----" << endl;
}
