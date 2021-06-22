#include <iostream>

using namespace std;

int identice(long n) {
  int c = n % 10;
  while (n) {
    if (n % 10 != c) {
      return 0;
    }
    n /= 10;
  }
  return 1;
}

int main() {
  cout << identice(2222) << endl;
  cout << identice(2122) << endl;
}
