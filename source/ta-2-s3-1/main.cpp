#include <iostream>

using namespace std;

void dfii(int n) {
    for (int i = n; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            if (i * j == n) {
                cout << "(" << i << " " << j << ")" << endl;
            }
        }
    }
}

int main()
{
    cout << "----- ta-2-s3-1 -----\n" << endl;

    dfii(32);

    cout << "\n----- END -----" << endl;
}
