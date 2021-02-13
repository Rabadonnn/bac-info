#include <iostream>

using namespace std;

void patrate(unsigned x, unsigned y) {
  int s = 0;
  int found = 0;
  for (int i = x; i <= y; i++) {
    int sq = sqrt(i);
    if (sq * sq == i) {
      if (found) {
        cout << "+" << i;
      } else {
        cout << i;
      }
      found = 1;
    }
  }
  if (!found) {
    cout << "nu exista" << endl;
  } else {
    cout << "=" << s << endl;
  }
}

int main() { patrate(10, 50); }
