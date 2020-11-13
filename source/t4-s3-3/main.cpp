#include <fstream>
#include <iostream>

using namespace std;

int main() {
   cout << "----- t4-s3-3 -----\n" << endl;
   ifstream bac("source/t4-s3-3/bac.txt");

   int aparitii[991] = {0};
   int nrmax = 0;
   int maxapar = 0;

   int x;
   while (bac >> x) {
      if (x > 0) {
         x *= 10;
         x += 1;
      } else if (x < 0) {
         x = abs(x);
         x *= 10;
      }

      aparitii[x]++;
      if (x > nrmax) {
         nrmax = x;
      }
      if (aparitii[x] > maxapar) {
         maxapar = aparitii[x];
      }
   }

   for (int i = 0; i <= nrmax; i++) {
      if (aparitii[i] == maxapar) {
         int nr = i;
         int semn = nr % 10;
         nr /= 10;
         if (semn == 0) {
            nr -= nr * 2;
         }

         cout << nr << " ";
      }
   }

   bac.close();
   cout << "\n----- END -----" << endl;
}
