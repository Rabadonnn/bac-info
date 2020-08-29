#include <iostream>

using namespace std;

int step = 0;
int f(int n)
{
    cout << step++ << ": " << n << endl;
    if (n <= 2) return n;
    if (n % 2 == 1) return f(n - 2) - f(n - 1);
    return f(n - 1) - f(n - 2);
}

int main()
{
    cout << "----- bac -----\n" << endl;

    cout << f(6) << endl;

    // B

    cout << "\n----- END -----" << endl;
}
