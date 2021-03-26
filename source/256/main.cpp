#include <iostream>

using namespace std;

int main() {
  int n = 7;
  int k = 3;
  int a[] = {721, 102, 2020, 523, 2101, 320, 24};

  int found = 0;

  int d = a[k - 1] % 100 / 10;

  for (int i = 0; i < 7; i++) {
    if (a[i] % 100 / 10 == d && k -1 != i) {
      cout << a[i] << " ";
      found = 1;
    }
  }

  if (!found) {
    cout << "nu exista" << endl;
  }
}
