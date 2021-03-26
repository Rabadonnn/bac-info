#include <iostream>

using namespace std;

// a: 1 1 1 0 0
//
// b: 102468

int main()
{
         << endl;

    int a;
    cin >> a;

    int c = 0;

    do {
        int b = a;
        int x = 0;

        do {
            if (b % 10 == c) {
                x = 1;
            }
            b /= 10;
        } while (b != 0 && x != 1);

        cout << x << " ";
        c += 2;
    } while (c < 10);
}
