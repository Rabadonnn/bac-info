#include <iostream>

using namespace std;

void numar(int n, int &m) {
    int v[10];
    m = 0;

    int vlen = 0;
    while (n != 0) {
        v[vlen++] = n % 10;
        n /= 10;
    }

    while (condition) {
    }

    for (int i = 0; i < vlen; i++) {
        for (int j = 0; j < vlen; j++) {
            if (v[j] > v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }

    for (int i = vlen - 1; i >= 0; i--) {
        if (v[i] % 2 == 1) {
            m *= 10;
            m += v[i];
        }
    }
}

int main()
{
    cout << "----- meet-t3-s3-2 -----\n" << endl;

    int n = 99359;
    int m;
    numar(n, m);

    cout << m << endl;

    cout << "\n----- END -----" << endl;
}
