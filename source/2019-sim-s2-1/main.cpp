#include <iostream>

using namespace std;

int main()
{
    cout << "----- 2019-sim-s2-1 -----\n" << endl;

    int a;
    int b;
    int k;

    cin >> a >> b >> k;

    int pm = 0;
    int y = 0;
    int i = b;

    while (i >= a) {
        int x = i;
        int p = 0;

        while (x % k == 0) {
            x /= k;
            p++;
        }

        if (p != 0 && (p < pm || pm == 0)) {
            pm = p;
            y = i;
        }

        i--;
    }

    // 2016 2019

    for (i = b; i >= a; i--) {
        // restu
    }

    cout << y;

    cout << "\n----- END -----" << endl;
}
