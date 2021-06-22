#include <iostream>

using namespace std;

int main() {
  char x[] = "bac2021";

  cout << x + 3;

  for (int i = 0; i < strlen(x); i++) {
    if (strchr("0123456789", x[i]) == 0) {
      cout << x[i] << '!';
    }
  }
}
