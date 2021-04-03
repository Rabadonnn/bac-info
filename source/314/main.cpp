#include <cstring>
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  char cuvinte[n][20];
  for (int i = 0; i <= n; i++) {
    cin.getline(cuvinte[i], 20);
  }
  int okay = 0;
  for (int i = 0; i < n; i++) {
    if (strlen(cuvinte[n]) > strlen(cuvinte[i])) {
      continue;
    }
    int prefix = 1;
    for (int j = 0; j < strlen(cuvinte[n]); j++) {
      if (cuvinte[n][j] != cuvinte[i][j]) {
        prefix = 0;
        break;
      }
    }
    if (prefix) {
      cout << cuvinte[i] << " ";
      okay = 1;
    }
  }
  if (!okay) {
    cout << "nu exista" << endl;
  }
}