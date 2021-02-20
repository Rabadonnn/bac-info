#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ifstream bacin("source/rx_28/bac.in");

  int x;
  int nr;
  bacin >> x;
  nr = x;
  int sum = nr;
  int max = sum;
  while (bacin >> x) {
    if (x % 2 != nr % 2) {
      if (sum > max) {
        max = sum;
      }
      nr = x;
      sum = x;
    } else {
      sum += x;
    }
  }

  cout << max << endl;

  bacin.close();
}
