#include <iostream>

using namespace std;

void divx(int n, int x) {
  for (int i = n * x; i >= x; i -= x) {
    cout << i << " ";
  }
}

int main() {
  divx(4, 15);
}
