#include <iostream>

using namespace std;

void generatoare(int n) {
   bool found;
   for (int i = 1; i <= n / 2; i++) {
      for (int j = 1; j <= n / 2; j++) {
         if (i % 2 == 0 && i * j + i / j == n) {
            cout << i << "-" << j << " ";
            found = true;
         }
      }
   }
   if (!found) {
      cout << "nu exista";
   }
   cout << endl;
}

int main()
{
   cout << "----- ta-4-s3-1 -----\n" << endl;

   generatoare(2020);

   cout << "\n----- END -----" << endl;
}
