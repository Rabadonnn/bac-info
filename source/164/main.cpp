#include <iostream>

using namespace std;

int main()
{

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
            a[i][j] = i - diag;
         }
         cout << a[i][j] << " ";
      }
      cout << endl;
   }
}
