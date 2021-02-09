#include <cstring>
#include <iostream>

using namespace std;

int main() {
  cout << "--- rx_2 ---\n" << endl;

  char text[] = "el prefera sa mearga la schi";
  char vowels[] = "aeiou";

  char word[4];
  word[3] = '\n';

  char *token = strtok(text, " ");

  int currWord = 0;
  bool foundWord = true;
  while (token) {

    if (currWord == 0 || currWord == 1) {
      bool found = true;
      for (int i = 0; i < strlen(token); i++) {
        if (currWord == 0) {
          if (strchr(text, token[i]) == NULL) {
            found = true;
            word[0] = token[i];
            break;
          }
        } else if (currWord == 1) {
          if (strchr(vowels, token[i])) {
            found = true;
            word[0] = token[i];
            break;
          }
        }
      }

      if (!found) {
        foundWord = false;
        break;
      }
    }

    char *newToken = strtok(NULL, " ");
    if (newToken) {
      currWord++;
      token = newToken;
    }
  }

  if (currWord > 2) {
    word[2] = token[strlen(token) - 1];
  }

  if (foundWord) {
    cout << word << endl;
  } else {
    cout << "nu exista" << endl;
  }

  cout << "\n--- END ---" << endl;
}
