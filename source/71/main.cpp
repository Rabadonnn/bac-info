#include <iostream>

using namespace std;

int main() {
  int m;
  int n;
  cin >> m >> n;
  int sala[m][n];

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> sala[i][j];
    }
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      bool gasit = false;
      if (sala[i][0] != 0 && sala[i][0] == sala[j][n - 1] && !gasit) {
        cout << sala[i][0] << " ";
        gasit = true;
      }
    }
  }
}
