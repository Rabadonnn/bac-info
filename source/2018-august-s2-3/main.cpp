#include <iostream>

using namespace std;

struct impartire {
    int cat;
    int rest;
} rezultat;

int main()
{
    cout << "----- 2018-august-s2-3 -----\n"
         << endl;

    int x = 10;

    if (x != 0) {
        rezultat = (impartire) { 2018 / x, 2018 % x };
        // sau
        rezultat.cat = 2018 / x;
        rezultat.rest = 2018 % x;
    } else {
        cout << "impartire nepermisa";
    }

    cout << "\n----- END -----" << endl;
}
