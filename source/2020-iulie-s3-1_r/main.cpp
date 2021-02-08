#include <iostream>

using namespace std;

int main() {
  cout << "--- 2020-iulie-s3-1_r ---\n" << endl;

  int a = 20;
  int b = 12;
  int min = a > b ? b : a;
  int s = 0;

  for (int i = 1; i <= min; i++) {
    if (a % i == 0 && b % i == 0) {
      s += i;
    }
  }

  cout << s << endl;

  cout << "\n--- END ---" << endl;
}
