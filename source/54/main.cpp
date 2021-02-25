#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ifstream bacin("source/54/bac.txt");
  int a = 9;
  int b = 9;
  int found = 0;
  int x;
  while (bacin >> x) {
    if (x / 10 != 0 && x / 100 == 0) {
      found = 1;
      if (x > b) {
        b = x;
      }
    }
  }
  b++;
  if (!found) {
    cout << "nu exista" << endl;
  } else {
    cout << a << " " << b << endl;
  }

  bacin.close();
}
