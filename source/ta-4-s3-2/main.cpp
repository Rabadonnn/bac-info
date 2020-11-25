#include <iostream>

using namespace std;

int main()
{
   cout << "----- ta-4-s3-2 -----\n" << endl;

   int v[3][6] = {
      { 1, 1, 0, 0, 1, 0},
      { 0, 1, 1, 1, 1, 1},
      { 1, 0, 0, 0, 1, 0}
   };

   int result = 0;

   for (int i = 1; i < 6; i++) {
      bool complementare = true;
      for (int j = 0; j < 3; j++) {
         if (v[0][j] == v[i][j]) {
            complementare = false;
            break;
         }
      }
      if (complementare) {
         result++;
      }
   }

   cout << result << endl;

   cout << "\n----- END -----" << endl;
}
