#include <iostream>

using namespace std;

int main()
{
   cout << "----- ta-3-s3-2 -----\n" << endl;

   int n = 5;

   int a[n][n];

   for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
         int diag = n - j - 1;
         if (i == diag) {
            a[i][j] = 0;
         } else if (i < diag) {
            a[i][j] = diag - i;
         } else if (i > diag) {
            a[i][j] = ;
            // [-]
         }
         cout << a[i][j] << " ";
      }
      cout << endl;
   }

   cout << "\n----- END -----" << endl;
}
