#include <iostream>

using namespace std;

int main() {
  int a[] = {16, 27, 43, 45, 49, 60, 68, 81, 92, 96};
  int aLen = sizeof(a) / sizeof(a[0]);

  int x = 43;

  // binary search
  int sol = -1;
  int left = 0;
  int right = aLen;

  while (left <= right) {
    int mid = (left + right) / 2;
    if (a[mid] == x) {
      sol = mid;
      break;
    }
    if (a[mid] > x) {
      right = mid - 1;
    }
    if (a[mid] < x) {
      left = mid + 1;
    }
  }

  cout << sol << endl;
}
