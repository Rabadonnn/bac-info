#include <iostream>

using namespace std;

long pDoi(long n) {
  long max = 0;
  for (int i = 1; i <= sqrt(n); i++) {
    long p = pow(2, i);
    if (p < n && p > max) {
      max = p;
    }
    if (p > n) {
      break;
    }
  }
  return max;
}

int main() {
  cout << pDoi(20) << endl;
}