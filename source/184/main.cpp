#include <iostream>

using namespace std;

void tablou(int n, int k, int* a) {
  int x = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < k; j++) {
      a[x] = i + 1;
      x++;
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
