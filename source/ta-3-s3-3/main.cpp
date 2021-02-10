#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   ifstream bacin("source/ta-3-s3-3/bac.in");

   int x;
   int len = 0;
   bool started = false;
   while (bacin >> x) {
      if (x < 0) {
         started = true;
      }
      if (started) {
         len++;
      }
   }
   cout << len  << endl;

}
