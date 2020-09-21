#include <iostream>

using namespace std;

void inserare(int &n)
{
    int k = 1;
    int v[15];

    while (n != 0) {
        v[k++] = n % 10;
        n /= 10;
    }

    for (int i = k - 1; i >= 2; i--) {
        n = n * 10 + v[i];
        n = n * 10 + abs(v[i] - v[i - 1]);
    }

    n = n * 10 + v[1];
}


int main()
{
    cout << "----- 2019-sim-s3-1 -----\n" << endl;

    int n = 7255;
    inserare(n);
    cout << n << endl;


    cout << "\n----- END -----" << endl;
}
