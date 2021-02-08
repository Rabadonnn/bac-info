#include <fstream>
#include <iostream>

using namespace std;

int main() {
  cout << "--- 2020-iulie-s3-3_r ---\n" << endl;

  ifstream bacin("source/2020-iulie-s3-3_r/bacin");

  int frec[1001] = {0};
  int x;
  int max = 0;
  while (bacin >> x) {
    frec[x]++;
    if (x > max) {
      max = x;
    }
  }

  bool palindrom = true;
  for (int i = 0; i <= max; i++) {
    if (frec[i] % 2 != 0) {
      palindrom = false;
      break;
    }
  }

  cout << (palindrom ? "DA" : "NU") << endl;

  cout << "\n--- END ---" << endl;
}
