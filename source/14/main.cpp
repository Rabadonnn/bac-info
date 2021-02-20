#include <iostream>

using namespace std;

void inserare(int &n, int *a) {
  int nrpare = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] % 2 == 0) {
      nrpare++;
    }
  }
  int b[n + nrpare];

  int j = 0;
  for (int i = 0; i < n; i++) {
    b[j] = a[i];
    j++;
    if (a[i] % 2 == 0) {
      b[j++] = 2011;
    }
  }
  n += nrpare;
  a = (int*)realloc(a, n * sizeof(int));
  // a = b;

  for (int i = 0; i < n; i++) {
    cout << b[i] << " ";
  }
  cout << endl;
}

int main() {
  int a[] = {1, 4, 5, 3, 82, 6, 2};
  int n = 7;

  inserare(n, a);

  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
}
