#include <cstring>
#include <iostream>

using namespace std;

int main() {
   cout << "----- ta-3-s2-3 -----\n" << endl;

   char sir[] = "ALIANTA";

   for (int p = 0; p < strlen(sir); p++) {
      if (sir[p - 1] == 'I' || sir[p + 1] == 'I') {
         if (sir[p] != 'A') {
           cout << sir[p];
         }
      } else {
         cout << sir[p];
      }
   }

   cout << endl;

   cout << "\n----- END -----" << endl;
}
