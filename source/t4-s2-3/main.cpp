#include <iostream>

using namespace std;

int main() {
   cout << "----- t4-s2-3 -----\n" << endl;

   int a[5][5];

   for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
         if (i == 0 || j == 0) {
            a[i][j] = 1;
         } else {
            a[i][j] = (a[i - 1][j] + a[i][j - 1]) % 10;
         }
         cout << a[i][j] << " ";
      }
      cout << endl;
   }

   cout << "\n----- END -----" << endl;
}
