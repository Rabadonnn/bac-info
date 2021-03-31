#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int okay = 1;
  int c = n % 10;
  n /= 10;
  while (n) {
    if (n % 10 != c) {
      okay = 0;
      break;
    }
    n /= 10;
  }
  cout << okay << endl;
}
