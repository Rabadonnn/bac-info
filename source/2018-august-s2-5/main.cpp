#include <iostream>

using namespace std;

int main() {
    cout << "----- 2018-august-s2-5 -----\n" << endl;

    unsigned int n;
    cin >> n;

    unsigned int numbers[n];
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    unsigned int mat[n][n];

    cout << endl;

    for (unsigned int i = 0; i < n; i++) {
        for (unsigned int j = 0; j < n; j++) {
            if (j % 2 == 0) {
                mat[j][i] = numbers[n - i - 1];
            } else {
                mat[j][i] = numbers[i];
            }
        }
    }

    for (unsigned int i = 0; i < n; i++) {
        for (unsigned int j = 0; j < n; j++) {
            cout << mat[j][i] << " ";
        }
        cout << endl;
    }

    cout << "\n----- END -----" << endl;
}
