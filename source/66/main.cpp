#include <cmath>
#include <iostream>

using namespace std;

void Impare(long& n)
{
    int i = 1;

    while (i <= n) {
        if (n / i % 2 != 0) {
            n -= i;
        }
        i *= 10;
    }
}

int main()
{
         << endl;

    long n = 235690;
    Impare(n);

    cout << n << endl;
}
