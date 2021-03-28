#include <iostream>

using namespace std;

int main()
{
  // test antrenament stiinte 3 2020 sub3 ex1

  unsigned m;
  unsigned n;
  cin >> m >> n;
  unsigned result = 0;

  unsigned max;
  if (n >= m) {
    max = n;
  } else {
    max = m;
  }

  for (int i = 2; i <= max / 2; i++) {
    int prim = 1;
    for (int j = 2; j <= i / 2; j++) {
      if (i % j == 0) {
        prim = 0;
        break;
      }
    }
    if (prim && m % i == 0 && n % i == 0) {
      result++;
    }
  }

  cout << result << endl;
}