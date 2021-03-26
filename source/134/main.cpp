#include <iostream>

using namespace std;

int main()
{

    int n = 4;
    int k = 3;

    int a[n][n * k];

    for (int i = 0; i < n; i++) {
        int s = i + 1;
        for (int j = 0; j < n * k; j += k) {
            for (int l = 0; l < k; l++) {
                a[i][j + l] = s;
                cout << a[i][j + l] << " ";
            }
            s++;
        }
        cout << endl;
    }
}
