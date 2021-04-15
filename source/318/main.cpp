#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char text[100];
  cin.getline(text, 100);

  for (int i = 0; i < strlen(text); i++) {
    if (i == 0 || text[i - 1] == ' ') {
      text[i] = toupper(text[i]);
    } else {
      text[i] = tolower(text[i]);
    }
  }

  cout << text << endl;
}