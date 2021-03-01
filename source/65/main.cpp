#include <iostream>

using namespace std;

int main()
{
  int n = 67638825;

  int frec[9];

  while (n) {
    int c = n % 10;
    n /= 10;
    if (c % 2 == 0) {
      frec[c]++;
    }
  }

  int sum = 0;
  for (int i = 0; i < 9; i++) {
    if (frec[i] != 0) {
      sum += i;
    }
  }
  cout << sum << endl;
}
