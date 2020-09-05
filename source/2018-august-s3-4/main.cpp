#include <iostream>

using namespace std;

unsigned int f(unsigned int n) {
    if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 3;
    }

    cout << n << " ";

    return 2 * f(n - 1) - f(n - 2) + 2;
}

int main()
{
    cout << "----- 2018-august-s3-4 -----\n" << endl;

    f(80);

    cout << "\n----- END -----" << endl;
}
