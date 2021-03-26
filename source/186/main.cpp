#include <fstream>
#include <iostream>

using namespace std;

int main() {
  cout << "--- 2010-august-s3-4 ---\n" << endl;

  ifstream bacin("source/2010-august-s3-4/bac.in");

  int n;
  bacin >> n;

  int a[n];
  int maxs[] = {-1, -1, -1};

  for (int i = 0; i < n; i++) {
    bacin >> a[i];

    for (int j = 2; j >= 0; j--) {
      if (a[i] > maxs[j] && a[i] % 5 == 0) {
        maxs[j] = a[i];
        break;
      }
    }
  }

  for (int i = 0; i < 3; i++) {
    if (maxs[i] != -1) {
      cout << maxs[i] << " ";
    }
  }

  cout << endl;

  cout << "\n--- END ---" << endl;
}
