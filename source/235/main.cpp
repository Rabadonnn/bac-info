#include <iostream>

using namespace std;

int main()
{
  int gasit = 0;
  int maxImp = -1;
  int n = 5672883;

  while (n != 0) {
    int c = n % 10;
    n /= 10;
    if (c > maxImp && c % 2 == 1) {
      maxImp = c;
    }
  }

  cout << maxImp << endl;
}
