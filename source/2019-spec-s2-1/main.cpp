#include <iostream>

using namespace std;

int main()
{
    cout << "----- 2019-spec-s2-1 -----\n" << endl;

    int n;
    int k;

    cin >> n;
    cin >> k;

    int p = 0;
    int i = 1;

    while (i <= n)
    {
        int x = i;
        while (x % k == 0)
        {
            x /= k;
            p++;
        }
        i++;
    }

    // b: 45 46 47

    for (int i = 1; i <= n; i++)
    {
        int x = i;
        while (x % k == 0)
        {
            x /= k;
            p++;
        }
    }

    cout << p << endl;

    cout << "\n----- END -----" << endl;
}