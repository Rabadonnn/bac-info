#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   cout << "----- ta-5-s3-3 -----\n" << endl;
   fstream bacin("source/ta-5-s3-3/bac.in");

   int sume[100] = {0};

   int x;
   int sum = 0;
   int maxSum = 0;
   while (bacin >> x) {
      sum += x;
      if (x > sum) {
         sum = x;
      }
      maxSum = max(maxSum, sum);
   }

   cout << maxSum << endl;

   bacin.close();
   cout << "\n----- END -----" << endl;
}
