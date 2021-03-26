#include <iostream>

using namespace std;

int kpn(unsigned a, unsigned b, unsigned k) {
  int c = 0;
  for (int i = a; i <= b; i++) {
    int sd = 0;
    for (int j = 1; j <= i; j++) {
      if (i % j == 0) {
        sd += j;
      }
    }
    if (sd % 2 == i % 2) {
      c++;
      if (c == k) {
        return i;
      }
    }
  }
  return -1;
}

int main()
{
  cout << kpn(27, 50, 3) << endl;
}
