#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   cout << "----- ta-4-s3-3 -----\n" << endl;
   ifstream bacin("source/ta-4-s3-3/bac.in");

   int frec[100] = {0};

   int x;
   int max = 0;
   while (bacin >> x) {
      if (x > max) {
         max = x;
      }
      frec[x]++;
   }

   for (int i = 0; i <= max; i++) {
      if (frec[i] == 2) {
         cout << i << " ";
      }
   }
   cout << endl;

   bacin.close();
   cout << "\n----- END -----" << endl;
}
