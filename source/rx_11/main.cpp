#include <iostream>

using namespace std;

void triplete(unsigned int n) {
  for (int z = 0; z <= n; z++) {
    for (int y = 0; y < z; y++) {
      for (int x = 0; x < y; x++) {
        if (x * y + y * z == n) {
          cout << "(" << x << ", " << y << ", " << z << ")" << endl;
        }
      }
    }
  }
}

int main()
{
  triplete(8);
}
