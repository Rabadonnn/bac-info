#include <iostream>

using namespace std;

void f(int n) {
  cout << "f:" << n << " ";
  for (int i = n; i >= 1; i--) {
    f(n - 1);
    cout << i;
  }
  cout << endl;
}

int main() { f(3); }
