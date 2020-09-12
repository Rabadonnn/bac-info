#include <iostream>

using namespace std;

int main()
{
    cout << "----- 2018-iulie-s2-4 -----\n" << endl;

    int a[9][9];

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (i == j || i == 9 - j - 1) {

                a[i][j] = 0;
            } else {
                a[i][j] = (i + j) % 8;
            }
        }
    }

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\n----- END -----" << endl;
}
