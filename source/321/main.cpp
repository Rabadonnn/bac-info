#include <cstring>
#include <iostream>

using namespace std;

int main() {
  char text[100];
  cin.getline(text, 100);
  int index = -1;

  for (int i = 0; i < strlen(text); i++) {
    if (strchr("aeiou", text[i]) != NULL) {
      index = i;
    }
  }

  if (index == -1) {
    cout << "nu exista" << endl;
  } else {
    for (int i = index; i < strlen(text) - 1; i++) {
      text[i] = text[i + 1];
    }
    text[strlen(text) - 1] = '\0';

    cout << text << endl;
  }
}