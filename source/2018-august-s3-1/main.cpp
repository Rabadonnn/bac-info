#include <iostream>

using namespace std;

void f(int n)
{
    cout << n % 2;

    if (n>=3) {
        f(n - 3);
    }
}

int main()
{
    cout << "----- 2018-august-s3-1 -----\n" << endl;

    f(7);

    cout << "\n----- END -----" << endl;
}

