#include <iostream>

using namespace std;

int main() {
  cout << "--- 2017-august-s3-3 ---\n" << endl;

  int sir[] = {180, 30, 80, 280, 130, 330, 230, 30, 30, 330, 80};
  int n = sizeof(sir) / sizeof(sir[0]);

  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (sir[j]> sir[j + 1]) {
        int t = sir[j];
        sir[j] = sir[j + 1];
        sir[j + 1] = t;
      }
    }
  }

  int r;
  bool foundr = false;
  bool prog = true;
  for (int i = 0; i < n - 1; i++) {
    int dif = sir[i + 1] - sir[i];
    if (dif != 0) {
      if (!foundr) {
        r = dif;
        foundr = true;
      } else {
        if (r != dif) {
          prog = false;
          break;
        }
      }
    }
  }

  if (prog) {
    cout << r << "\n";
  } else {
    cout << "NU" << "\n";
  }

  cout << "\n--- END ---" << endl;
}
