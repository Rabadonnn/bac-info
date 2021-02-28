#include <iostream>

using namespace std;

void tablou(unsigned n, unsigned k, int a[]) {
  int c = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < k; j++) {
      a[c++] = i + 1;
    }
  }
}

int main()
{
  int n = 4;
  int k = 3;
  int a[n * k];

  tablou(n, k, a);

  for (int i = 0; i < n * k; i++) {
    cout << a[i] << " ";
  }
}
