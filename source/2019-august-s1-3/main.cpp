#include <iostream>

using namespace std;

int main()
{
    cout << "----- bac -----\n" << endl;

    /*
     *      { caramel, ciocolata, frisca, nuci, vanilie }
     *
     *      -> reguli:
     *          ultima pozitie este mereu vanilie sau frisca
     *          vanilie sau frisca nu pot fi pe primele 2 pozitii
     *
     *      -> doua torturi cu straturi din aceleasi tipuri de crema
     *          sunt diferite daca acestea sunt dispuse in alta ordine
     *
     *      1: { caramel, ciocolata, frisca }
     *      2: { caramel, ciocolata, vanilie }
     *      3: { caramel, nuci, frisca }
     *      4: { caramel, nuci, vanilie }
     *
     *      5: { ciocolata, caramel, frisca }
     *
     *      raspuns: ( A )
     *
     *      1. incepem pe ultima pozitie cu frisca
     *      se ia primul element din vector cu celalalt ramas care nu vanilie => { caramel, ciocolata, frisca }
     *      2. pastram primele 2, schimbam frisca cu vanilie
     *      -> continuam
     */

    cout << "\n----- END -----" << endl;
}
