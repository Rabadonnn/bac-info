#include <iostream>

using namespace std;

/*
 * Subprogramul Egal are un parametru, n, prin care primește un număr natural cu
 * cel puțin o cifră impară. Subprogramul returnează valoarea 1 dacă toate
 * cifrele impare ale lui n sunt egale între ele sau valoarea 0 în caz contrar.
 */

/*
 * Cum functioneaza:
 * declaram ultima cifra impara cu 0
 * parcurgem cifrele lui n
 * daca cifra curenta a lui n este impara
 *
 *  -> daca ultima cifra impara == 0
 *      -> ultima cifra impara primeste cifra curenta a lui n
 *
 *  -> altfel
 *      -> daca ultima cifra impara si cifra curenta nu sunt egale returnam 0;
 *
 * -> daca nu se intampla nimic in while, ajungem la cazul default si returnam
 * 1;
 */

int Egal(int n)
{
    int last_odd_digit = 0;
    while (n != 0) {
        int c = n % 10;
        n /= 10;

        if (c % 2 == 1) {
            if (last_odd_digit == 0) {
                last_odd_digit = c;
            } else {
                if (c != last_odd_digit) {
                    return 0;
                }
            }
        }
    }
    return 1;
}

int main()
{
    cout << "-----\npbinfo\n-----\n"
         << endl;

    cout << Egal(7274471) << endl;

    cout << "\n----- END -----" << endl;
}
