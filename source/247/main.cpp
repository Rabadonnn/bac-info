#include <cstring>
#include <iostream>

using namespace std;

int main() {
  char text[] =
      "cuvantul consoane are un numar de patru vocale si patru consoane";
  char vocale[] = "aeiou";

  int result = 0;

  char *cuvant = strtok(text, " ");

  while (cuvant) {
    int v = 0;
    int c = 0;

    for (int i = 0; i < strlen(cuvant); i++) {
      if (strchr(vocale, cuvant[i]) != NULL) {
        v++;
      } else {
        c++;
      }
    }

    if (v == c) {
      result++;
    }

    cuvant = strtok(NULL, " ");
  }

  cout << result << endl;
}
