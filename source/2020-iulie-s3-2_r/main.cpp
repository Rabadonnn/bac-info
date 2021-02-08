#include <iostream>

using namespace std;

int main() {
  cout << "--- 2020-iulie-s3-2_r ---\n" << endl;

  int n = 7;
  int a[] = {120, 700, 65, 128, 3456, 5, 501};
  bool found = false;

  for (int i = 0; i < n; i++) {
    int nrc = 0;
    int x = a[i];
    while (x) {
      x /= 10;
      nrc++;
    }
  }

  if (!found) {
    cout << "nu exista" << endl;
  }

  cout << "\n--- END ---" << endl;
}
