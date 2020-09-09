#include <iostream>

using namespace std;

void f(int x)
{
    cout << "*";
    if (x > 5) {
        f((x +  1) / 2);
    }
}

int main()
{
    cout << "----- 2020-august-s1-2 -----\n" << endl;

    f(17);

    cout << "\n----- END -----" << endl;
}
