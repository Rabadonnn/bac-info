#include <cstring>
#include <iostream>

using namespace std;

int main() {
   cout << "----- t4-s3-1 -----\n" << endl;

   char a[] = "accesul copiilor aa bb";
   int lenA = strlen(a);
   char result[lenA * 2];

   for (int i = 0, j = 0; i < lenA && j < lenA * 2; i++, j++) {
      if (i == 0) {
         result[j] = a[i];
      } else if (a[i - 1] == a[i]) {
         result[j++] = '#';
      }
      result[j] = a[i];
   }

   cout << result << endl;

   cout << "\n----- END -----" << endl;
}
