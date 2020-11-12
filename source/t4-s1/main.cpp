#include <iostream>

using namespace std;

int main() {
   cout << "----- t4-s1 -----\n" << endl;

   /*
    * 1. c
    *
    * 2. --
    *
    * 3.
    *      a b c d e
    *
    *      aba abe aca
    *      ace ada ade
    *      eba [ ebe eca ece ] eda ede
    * d
    *
    * 4. --
    *
    * 5.
    *      int f(int n) {
    *          if (n % 10 == 5) {
    *              return 2;
    *          } else {
    *              return 2 * f(n + 1);
    *          }
    *      }
    *
    *      f(1);
    *      -> 2 * f(1 + 1)
    *      -> 2 * (2 * f(2 + 1))
    *      -> 2 * (2 * 2 * f(3 + 1))
    *      -> 2 * (2 * 2 * 2 * f(4 + 1))
    *
    *     -> 2 * 2 * 2 * 2 * 2
    *      -> 32
    */

   cout << "\n----- END -----" << endl;
}
