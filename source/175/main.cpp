#include <iostream>

using namespace std;

int baza(int n) {
   for (int i = 2; i <= 10; i++) {
      int x = n;
      bool ok = true;
      while (x != 0) {
         int c = x % 10;
         x /= 10;
         if (!(c >= 0 && c <= i - 1)) {
            ok = false;
            break;
         }
      }
      if (ok) {
         return i;
      }
   }
   return -1;
}

int main()
{
   cout << "----- ta-5-s3-1 -----\n" << endl;

   cout << baza(50731) << endl;

   cout << "\n----- END -----" << endl;
}
