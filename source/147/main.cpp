#include <iostream>

using namespace std;

int main()
{
    cout << "----- ta-2-s2-3 -----\n" << endl;

    int a[5][7] = {0};

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 7; j++) {

            int& e = a[i][j];

            if (i == 0 || j == 0) {
                e = 1;
            } else {
                int s = a[i - 1][j] + a[i][j - 1];
                int c = s % 10;
                e = c;
            }
            cout << e << " ";
        }
        cout << endl;
    }

    cout << "\n----- END -----" << endl;
}
