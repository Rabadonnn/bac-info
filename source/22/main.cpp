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

    f('e', 5);


    // x poate fi orice numar >= 5
    // cauta cod ascii
}
