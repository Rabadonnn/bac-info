#include <cmath>
#include <iostream>

using namespace std;

struct complex {
   int pre;
   int pim;
};

int main() {
   cout << "----- t4-s2-2 -----\n" << endl;

   complex z;

   cout << "Parte reala z: ";
   cin >> z.pre;

   cout << "Parte imaginara z: ";
   cin >> z.pim;

   cout << "Modul z: " << sqrt(pow(z.pre, 2) + pow(z.pim, 2)) << endl;

   cout << "\n----- END -----" << endl;
}
