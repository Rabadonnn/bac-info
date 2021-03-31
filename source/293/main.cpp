#include <iostream>

using namespace std;

unsigned baza(long n) {
  int max = 0;
  while (n) {
    int c = n % 10;
    if (c > max) {
      max = c;
    }
    n /= 10;
  }
  return max + 1;
}

int main() {
  cout << baza(50731) << endl;
}
