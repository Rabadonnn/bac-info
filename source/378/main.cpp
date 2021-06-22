#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ifstream bac("source/378/bac.txt");

  int f[10] = {0};

  int x;
  int e = 0;

  while (bac >> x) {
    if (x % 2 == 0) {
      f[x]++;
      e = 1;
    }
  }

  if (e == 0) {
    cout << "nu exista" << endl;
  } else {
    for (int i = 0; i <= 8; i += 2) {
      for (int j = 0; j < f[i]; j++) {
        cout << i << " ";
      }
    }
  }

  bac.close();
  return 0;
}
