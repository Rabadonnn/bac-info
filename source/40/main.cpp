#include <iostream>

using namespace std;

int main() {
  int a[] = {178, 899, 476, 660, 409, 312};
  for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
    a[i] += 100;
    cout << a[i] << " ";
  }
}
