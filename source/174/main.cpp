#include <iostream>

using namespace std;

int main()
{
   cout << "----- ta-5-s2-3 -----\n" << endl;

   char a[6][6] = {0};

   for (int i = 0; i < 6; i++) {
      for (int j = 0; j < 6; j++) {
         if ((i <= 5 - j && i <= j) || (j >= 5 - i && j <= i)) {
            if (j < 6 / 2) {
               a[i][j] = '(';
            } else {
               a[i][j] = ')';
            }
         } else {
            a[i][j] = '*';
         }
         cout << a[i][j] << " ";
      }
      cout << endl;
   }

   cout << "\n----- END -----" << endl;
}
