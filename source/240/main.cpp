#include <iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int a[n * 2];
  for (int i = 0; i < n * 2; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  for (int i = n * 2 - 1; i >= n; i--) {
    cout << a[i] << " ";
  }
}
