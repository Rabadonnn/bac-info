#include <iostream>

using namespace std;

int cifreImpare(unsigned n) {
  int x = 0;
  int cifre = 0;
  while (n) {
    int c = n % 10;
    n /= 10;
    if (c % 2 == 0) {
      x += c * pow(10, cifre);
      cifre++;
    }
  }
  if (x == 0) {
    return -1;
  }
  return x;
}

int main()
{
  cout << cifreImpare(12345) << endl;
}
