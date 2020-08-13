#include <iostream>

using namespace std;

// Un   arbore   cu 10 noduri,   numerotate   de   la 1   la 10,
// este   reprezentat   prin   vectorul   de   „tați” (7,5,6,5,7,0,6,3,3,8). 
// Indicați numărul de noduri „frunză” ale acestui arbore. 

// watch this https://www.youtube.com/watch?v=nxNMVElSFa0


// frunzele in vectorul de tati sunt cele ale caror index nu se gaseste
// in vectorul de tati
//
// tati:   [ 7, 5, 6, 5, 7, 0, 6, 3, 3, 8 ]
// indici: [ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 ]
//
// [1, 2, 4, 9, 10] nu sunt in vectorul de tati deci sunt frunze
//
// raspuns corect c) 5;

int main()
{
    cout << "-----\nfrunze din vector de tati\n-----\n" << endl;
    cout << "Raspuns corect: " << "c) 5" << endl;
    cout << "\n----- END -----" << endl;
}
