#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ifstream bacin("source/rx_22/bac.in");

  int x;
  int nr = -1;
  int count = 1;
  while (bacin >> x) {
    if (x != nr) {
      if (nr != -1) {
        cout << nr << " " << count << " ";
      }
      nr = x;
      count = 1;
    } else {
      count++;
    }
  }

  cout << nr << " " << count << endl;
}
