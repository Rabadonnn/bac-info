#include <iostream>

using namespace std;

void identice(unsigned int a, unsigned  int b) {
  for (int i = a; i <= b; i++) {
    int x = i;
    int c = x % 10;
    x /= 10;
    int okay = 1;
    while (x) {
      int newc = x % 10;
      x /= 10;
      if (newc != c) {
        okay = 0;
        break;
      }
    }
    if (okay) {
      cout << i << " ";
    }
  }
}

int main()
{
  identice(700, 1500);
}
