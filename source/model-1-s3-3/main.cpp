#include <iostream>

using namespace std;

int f(int n)
{
    if (n == 1 || n == 2) return 1;

    return 3 * f(n - 1) - f(n - 2);
}

int main()
{
    cout << "----- model-1-s3-3 -----\n" << endl;

    int a = 89;
    int b = 233;

    int n = 1;
    int x = 0;

    do
    {
        x = f(n);
        n++;
    } while (x != a);

    for (int i = n; i >= 1; i--)
    {
        cout << f(i) << " ";
    }

    cout << "\n----- END -----" << endl;
}
