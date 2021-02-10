#include <iostream>

using namespace std;

int f1(int x, int y)
{
    if (x % 2 != 0 || y % 2 != 0)
    {
        return 1;
    }
    else
    {
        return 2 * f1(x / 2, y / 2);
    }
}

int f2(int x, int y)
{
    if (x == y)
    {
        return x;
    }
    else
    {
        if (x > y)
        {
            return f2(x - y, y);
        }
        else
        {
            return f2(x, y - x);
        }
    }
}

int main()
{

    // b
    cout << f2(30, 50) << endl;
}
