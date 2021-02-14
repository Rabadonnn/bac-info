#include <iostream>

using namespace std;

unsigned int max(unsigned int n) {
  int max = -1;
  while (n) {
    int c = n % 10;
    n /= 10;
    if (c % 2 == 1 && c > max) {
      max = c;
    }
  }
  return max;
}

int main()
{
  cout << max(5672883) << endl;
}
