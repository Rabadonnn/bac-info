#include <iostream>

using namespace std;

int f(int a)
{
    // x, y, z
    int sir[] = { 1, 2, 4 };
    if (a < 3)
    {
        return sir[a];
    }

    return f(a - 1) + f(a - 2) - f(a - 3);
}

int main()
{
    cout << "----- 2019-spec-s3-3 -----\n" << endl;

    int n = 10;

    for (int i = n - 1; i >= 0; i--)
    {
        cout << f(i) << " ";
    }

    cout << "\n----- END -----" << endl;
}