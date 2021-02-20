#include <iostream>

using namespace std;

int main()
{
  int p1 = 12;
  int p2 = 8;

  for (int i = 1000000; i <= 9999999; i++) {
    int a[7];
    int x = i;
    int j = 0;
    while (x) {
      a[j++] = x % 10;
      x /= 10;
    }

    if (a[5] * a[6] == p1 && a[2] == a[3] && a[2] == a[4] && a[1] * a[0] == p2) {
      cout << i << endl;
    }
  }
}

