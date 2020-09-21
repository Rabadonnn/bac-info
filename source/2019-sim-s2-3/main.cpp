#include <iostream>

using namespace std;

int main()
{
    cout << "----- 2019-sim-s2-3 -----\n" << endl;

    int m[5][5] = { 0 };

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            m[j][i] = i + j * 2;
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\n----- END -----" << endl;
}
