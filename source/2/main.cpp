#include <iostream>

using namespace std;

int main()
{
    cout << "-----\nbac\n-----\n"
         << endl;

    int n;
    cin >> n;

    int k = 0;
    int i = 0;

    do {
        int x;
        cin >> x;
        int y = 2;

        while (x > 1 && x % y != 0) {
            y++;
        }

        if (k < x / y) {
            k = x / y;
        }
        i++;
    } while (i < n);

    cout << k << endl;

    cout << "\n----- END -----" << endl;
}
