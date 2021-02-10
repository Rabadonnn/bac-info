#include <iostream>

using namespace std;

unsigned int interval(unsigned int n)
{
    // in felul asta mergem la infinit
    int i = n;
    do {
        // plecam de la premiza ca numarul este prim
        bool prime = true;
        for (int j = 2; j < i / 2; j++) {
            if (i % j == 0) {
                // daca nu este prim, resul impartirii lui la un alt numar
                // returneaza 0;
                prime = false;
                break;
            }
        }
        // daca este prim
        // cel mai mic numar natural care nu este prim si e mai
        // mare decat i este i + 1
        if (prime) {
            return i + 1;
        }
    } while (i++);
    // i++ returneaza adevarat dar si creste valoare lui i cu 1

    // not found
    return 0;
}

int main()
{

    cout << interval(8) << endl;
}
