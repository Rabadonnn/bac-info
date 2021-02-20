#include <cstring>
#include <iostream>

using namespace std;

int main() {
  char text[] =
      "cuvantul consoane are un numar de patru vocale si patru consoane";
  char vowels[] = "aeiou";

  char *cuvant = strtok(text, " ");

  int result = 0;
  while (cuvant) {

    int vocale = 0;
    int consoane = 0;

    for (int i = 0; i < strlen(cuvant); i++) {
      int vocala = 0;
      for (int j = 0; j < strlen(vowels); j++) {
        if (cuvant[i] == vowels[j]) {
          vocale++;
          vocala = 1;
          break;
        }
      }
      if (!vocala) {
        consoane++;
      }
    }

    if (consoane == vocale) {
      result++;
    }

    cuvant = strtok(NULL, " ");
  }

  cout << result << endl;
}
