#include <iostream>

using namespace std;

int main()
{
    cout << "----- 2019-iulie-s3-2 -----\n"
         << endl;

    int m = 5;
    int n = 4;

    int mat[4][5] = {
        { 1, 2, 4, 2, 1 }, { 3, 5, 5, 5, 3 }, { 2, 4, 1, 4, 2 }, { 1, 1, 1, 1, 1 }
    };

    int mijloc = m / 2 + 1;

    int simetric = 1;

    for (int i = 0; i < mijloc - 1; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[j][i] != mat[j][m - i - 1]) {
                simetric = 0;
            }
        }
    }

    if (simetric == 1) {
        cout << "DA" << endl;
    } else {
        cout << "NU" << endl;
    }

    cout << "\n----- END -----" << endl;
}
