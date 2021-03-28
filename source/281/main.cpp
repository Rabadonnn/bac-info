#include <iostream>

using namespace std;

int main() {
  int n = 10;
  int a[] = {2, 5, 2, 4, -3, 4, -2, -7, -2, 9};

  // test antrenament 1 2020 sub3 ex2

  // remove element from array without creating a new one

  int newlen = n;
  for (int i = 0; i < n;) {
    if (a[i] < 0) {
      newlen--;
      for (int j = i; j < newlen; j++) {
        a[j] = a[j + 1];
      }
    } else {
      i++;
    }
  }

  for (int i = 0; i < newlen; i++) {
    cout << a[i] << " ";
  }
}