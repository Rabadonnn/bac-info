#include <iostream>

using namespace std;

int main() {
  char text[100];
  cin.getline(text, 100);

  char *cuvant = strtok(text, " ");

  while (cuvant != NULL) {
    char vowel = 'b';
    for (int i = 0; i < strlen(cuvant); i++) {
      if (strchr("aeiou", cuvant[i]) != NULL) {
        if (vowel == 'b') {
          vowel = cuvant[i];
        } else if (vowel != cuvant[i]) {
          vowel = 'b';
          break;
        }
      }
    }
    if (vowel != 'b') {
      cout << cuvant << endl;
    }
    cuvant = strtok(NULL, " ");
  }
}