#include <iostream>

using namespace std;

unsigned putere(unsigned n) {
  int minp = 0;
  int minnr = 0; 

  for (int i = 2; i <= n / 2; i++) {
    bool prim = true;
    for (int j = 2; j <= i / 2; j++) {
      if (i % j == 0) {
        prim = false;
        break;
      }
    }
    if (prim) {
      int putere = 0;
      int x = n;
      while (x % i == 0) {
        x /= i;
        putere++;
      }
      if (minp == 0) {
        minp = putere;
        minnr = i;
      } else if (putere < minp && putere > 0) {
        minnr = i;
        minp = putere;
      } else if (putere == minp && minnr > i) {
        minnr = i;
      }
    }
  }

  return minnr;
}

int main()
{
  cout << putere(880) << endl;
}