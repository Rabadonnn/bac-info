#include <iostream>

using namespace std;

int cmmdc(int a, int b)
{
    if (a == 0) return b;
    if (b == 0) return a;
    if (a == b) return a;

    if (a > b) return cmmdc(a - b, b);

    return cmmdc(a, b - a);
}

int main()
{
    cout << "----- pbinfo cmmdc -----\n" << endl;

    cout << cmmdc(18, 24) << endl;

    cout << "\n----- END -----" << endl;
}
