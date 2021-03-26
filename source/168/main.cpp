#include <iostream>
#include <cstring>

using namespace std;

int main()
{
   cout << "----- ta-4-s2-3 -----\n" << endl;

   char s[100];
   strcpy(s, "optsprezece");
   int i = 0;
   int j = strlen(s) - 1;

   while (i < j) {
      if (strchr("aeiou", s[i]) == NULL && strchr("aeiou", s[j]) != NULL) {
         s[i] = s[i] + 1;
         s[j] = s[j] - 1;
      }
      i++;
      j--;
   }

   cout << s << endl;

   /*
    *
    *    optsprezece
    *    pptsprezecd
    *    pptsprezecd
    *    ppusprezdcd
    *    ppusprezdcd
    *
    *    ppuspsdzdcd
    *
    * */

   cout << "\n----- END -----" << endl;
}
