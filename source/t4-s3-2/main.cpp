#include <iostream>

using namespace std;

int numarare(int n, int m) {
   int s = 0;
   for (int i = n; i <= m; i++) {
      int x = i;
      while (x != 0) {
         s++;
         x /= 10;
      }
   }
   return s;
}

int main() {
   cout << "----- t4-s3-2 -----\n" << endl;

   cout << numarare(7, 56) << endl;

   cout << "\n----- END -----" << endl;
}
