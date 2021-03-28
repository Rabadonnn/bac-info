#include <iostream>

using namespace std;

int main()
{
  // test antrenament stiinte 3 2020 sub3 ex2
  unsigned n;
  unsigned k;
  cin >> n >> k;
  int a[n];

  int sens = -1;
  int el = k;

  for (int i = 0; i < n; i++) {
    el += sens;
    a[i] = el;
    if (el == 0) {
      sens *= -1;
    }
  }

  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
}