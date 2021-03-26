#include <iostream>

using namespace std;

int main()
{
    cout << "----- model-1-s2-1 -----\n"
         << endl;

    int n;
    cin >> n;

    int p = 1;
    int m = 0;
    int k = 0;

    while (n != 0)
    {
        int x;
        cin >> x;

        for (int i = 1; i <= k; i++)
        {
            x /= 10;
        }

        int c;
        if (x != 0)
        {
            c = x % 10;
        }
        else
        {
            c = n % 10;
        }

        m = c * p + m;
        n /= 10;
        p *= 10;
        k++;
    }

    // 3.d. habar n am

    cout << m << endl;

    cout << "\n----- END -----" << endl;
}