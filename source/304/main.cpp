#include <iostream>

using namespace std;

int identice(long n) {
  int x = n % 10;
  n /= 10;
  while (n != 0) {
    if (n % 10 != x) {
      return 0;
    }
    n /= 10;
  }
  return 1;
}

int main() {
  cout << identice(2222) << endl;
  cout << identice(2122) << endl;
  cout << identice(2212) << endl;
}
