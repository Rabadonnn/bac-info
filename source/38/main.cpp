#include <fstream>
#include <iostream>

using namespace std;

// unfinished

int main() {
  ifstream bacin("source/38/bac.in");

  int x;
  int mins[3] = {0};
  while (bacin >> x) {
    int n = x;
    int c = n % 10;
    n /= 10;
    int d = n % 10;
    if (c == 0 && d == 2) {
      for (int i = 2; i >= 0; i--) {
        if (mins[i] == 0) {
          mins[i] = x;
          break;
        } else if (mins[i] > n) {
          mins[i] = x;
          break;
        }
      }
    }
  }

  for (int i = 0; i < 3; i++) {
    cout << mins[i] << " ";
  }
  cout << endl;

  bacin.close();
}
