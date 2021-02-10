#include <iostream>

using namespace std;

int main() {

  int a[] = {1, 1, 2, 2, 2, 7, 10, 10, 10, 10, 24};
  int freq[10000];

  int max = 0;
  for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
    if (a[i] % 2 == 0) {
      freq[a[i]] = 1;
      if (a[i] > max) {
        max = a[i];
      }
    }
  }

  for (int i = 0; i <= max; i++) {
    if (freq[i] != 0) {
      cout << i << " ";
    }
  }

  cout << endl;
}
