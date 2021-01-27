#include <cstring>
#include <iostream>

using namespace std;

int main()
{
  cout << "--- ta-6-s3-2 ---\n" << endl;

  char sir[] = "ei au plantat tamarix ea a adus iasomie";
  char vocale[] = "aeiou";

  char *token = strtok(sir, " ");
  int found = 0;
  while (token) {
    int v = 0;
    int c = 0;
    for (int i = 0; i < strlen(token); i++) {
      if (strchr(vocale, token[i]) != NULL) {
        v++;
      } else {
        c++;
      }
    }
    if (v < c) {
      cout << token << "\n";
      found++;
    }
    token = strtok(NULL, " ");
  }

  if (found == 0) {
    cout << "nu exista" << "\n";
  }

  cout << "\n--- END ---" << endl;
}
