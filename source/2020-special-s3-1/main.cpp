#include <iostream>
#include <cmath>

using namespace std;

int multiplu(int n)
{
    int multiplier = 1;
    while (true) {
        int x = n * multiplier++;

        float sq = sqrt(x);
        if (sq - floor(sq) == 0) {
            return x;
        }
    }
}

int main()
{
    cout << "----- 2020-special-s3-1 -----\n" << endl;

    cout << multiplu(72) << endl;
    cout << multiplu(144) << endl;

    cout << "\n----- END -----" << endl;
}
