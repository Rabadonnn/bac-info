#include <iostream>

using namespace std;

int main()
{

    char m[7][7];

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            m[i][j] = '*';
        }
    }

    // a in ascii e 27

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            if (j <= i) {
                m[j][i] = 'a' + i - j;
            } else {
                m[j][i] = '+';
            }
        }
    }

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}
