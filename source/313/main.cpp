#include <iostream>

using namespace std;

void suma(long n, int &s) {
  s = 0;
  int cifre[10] = {0};
  while (n != 0) {
    int c = n % 10;
    n /= 10;
    if (c % 2 == 1 && cifre[c] == 0) {
      s += c;
      cifre[c]++;
    }
  }
}

int main() {
  int s;
  suma(4713835, s);
  cout << s << endl;
}