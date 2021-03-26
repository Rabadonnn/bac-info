#include <iostream>

using namespace std;

int main()
{

   int n;
   cin >> n;

   do {
      int c1 = n % 10;
      n /= 10;
      int c2 = n % 10;

      if (c1 > c2) {
         c2 = c1;
         c1 = n % 10;
      }

      while (c1 < c2) {
         cout << c1;
         c2 /= 2;
      }
   } while(n > 9);


   // 3334
}
