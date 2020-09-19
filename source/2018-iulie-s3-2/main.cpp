#include <iostream>

using namespace std;

void f(char ch, int x)
{
    cout << ch;

    if (x == 0) {
        cout << "*";
    } else if (ch == 'a') {
        cout << x;
    } else {
        f(ch - 1, x - 1);
    }
}

int main()
{
    cout << "----- 2018-iulie-s3-2 -----\n" << endl;

    f('e', 5);


    // x poate fi orice numar >= 5
    // cauta cod ascii

    cout << "\n----- END -----" << endl;
}
