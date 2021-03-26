#include <iostream>

using namespace std;

struct cerc {
   struct {
      int x;
      int y;
   } centru;
   int raza;
} fig;

int main() {
   cout << "----- ta-3-s2-2 -----\n" << endl;

   fig.centru.x = 10;
   fig.centru.y = 2;
   fig.raza = 20;

   cout << "\n----- END -----" << endl;
}
