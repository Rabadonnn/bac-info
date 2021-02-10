#include <iostream>

using namespace std;

int resturi(int n, int x, int y, int r)
{
    int result = 0;

    for (int i = 1; i <= n; i++) {
        // ne permitem
        result += (i % x == r && i % y == r) ? 1 : 0;
    }

    return result;
}

int main()
{
}
