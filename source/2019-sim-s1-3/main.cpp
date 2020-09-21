#include <iostream>

using namespace std;

int f(int n, int d)
{
    if (d * d > n) {
        return 0;
    }

    if (d * d == n) {
        return 1;
    }

    if (n % d == 0) {
        return 2 + f(n, d + 1);
    }

    return f(n, d + 1);
}

int main()
{
    cout << "----- 2019-sim-s1-3 -----\n" << endl;

    cout << f(2019, 1) << endl;

    cout << "\n----- END -----" << endl;
}
