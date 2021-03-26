#include <cstring>
#include <iostream>

using namespace std;

int main()
{
   cout << "----- ta-5-s3-2 -----\n" << endl;

   char t[] = "grus leucogeranus are 1,40 m inaltime si traieste intre 30 si 40 de ani";

   char *token = strtok(t, " ");

   int result = 0;
   while (token) {
      if (strstr(token, ",") == NULL && atoi(token) != 0) {
         result++;
      }
      token = strtok(NULL, " ");
   }

   cout << result << endl;

   cout << "\n----- END -----" << endl;
}
