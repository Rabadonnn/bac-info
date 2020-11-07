#include <iostream>

using namespace std;

void dfii(int n) {
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            if (i * j == n) {
                if (i > j) {
                    cout << "(" << i << " " << j << ")" << endl;
                } else {
                    cout << "(" << j << " " << i << ")" << endl;
                }
            }
        }
    }
}

int main()
{
    cout << "----- ta-2-s3-1 -----\n" << endl;

    dfii(16);

    cout << "\n----- END -----" << endl;
}
