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
    cout << "----- 2018-iulie-s3-3 -----\n" << endl;
    cout << resturi(200, 5, 14, 2) << endl;
    cout << "\n----- END -----" << endl;
}
