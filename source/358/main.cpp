#include <iostream>

using namespace std;

int main() {
  char s[] = "CALCULATOARE";

  for (int i = 0; i < strlen(s); i++) {
    if (strchr("AOU", s[i]) == NULL) {
      cout << s[i];
    } else {
      cout << "*";
    }
  }
}
