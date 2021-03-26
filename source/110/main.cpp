#include <iostream>

using namespace std;

void f(int x)
{
    if (x >= 2) {
        if (x % 2 == 0) {
            cout << 0;
        }
        f(x / 2);
    } else {
        cout << 7;
    }

    cout << x;
}

int main()
{
    cout << "----- 2020-special-s1-2 -----\n" << endl;

    f(9);

    // d

    cout << endl;
    cout << "\n----- END -----" << endl;
}
