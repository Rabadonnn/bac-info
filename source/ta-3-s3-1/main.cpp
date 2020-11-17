#include <iostream>

using namespace std;

int factori(int n, int m) {
   int result = 0;

   for (int i = 2; i < max(m, n); i++) {
      bool prime = true;
      for (int j = 2; j < i / 2 + 1; j++) {
          if (i % j == 0) {
             prime = false;
             break;
          }
      }
      if (prime && n % i == 0 && m % i == 0) {
         result++;
      }
   }

   return result;
}

int main()
{
   cout << "----- ta-3-s3-1 -----\n" << endl;

   cout << factori(750, 490);

   cout << endl << "\n----- END -----" << endl;
}
