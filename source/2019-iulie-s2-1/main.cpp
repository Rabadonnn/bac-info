#include <iostream>

using namespace std;

int main()
{
    cout << "----- 2019-iulie-s2-1 -----\n" << endl;

    int m;
    int n;
    int p;
    int q;

    cin >> m >> n >> p >> q;

    int s1 = 0;
    int s2 = 0;

    do
    {
        if (p % m == 0 || p % n == 0)
        {
            s1 += 1;
        }
        if (p % m == 0 && p % n == 0)
        {
            s2 += 1;
        }
        p += 1;
    }
    while (p <= q);

    // while (p <= q)
    // {
        // if (p % m == 0 || p % n == 0)
        // {
            // s1 += 1;
        // }
        // if (p % m == 0 && p % n == 0)
        // {
            // s2 += 1;
        // }
        // p += 1;
    // }

    int s = s1 - 2 * s2;

    cout << s << endl;

    cout << "\n----- END -----" << endl;
}
