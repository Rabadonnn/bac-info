#include <iostream>
#include <cmath>

using namespace std;

float dist(float x1, float y1, float x2, float y2)
{
    float a = powf(x2 - x1, 2);
    float b = powf(y2 - y1, 2);
    return sqrtf(a + b);
}

int main()
{
    cout << "----- 2019-august-sn-s2-2 -----\n" << endl;

    float x = 0.1;
    float y = 0.1;
    
    cout << dist(0, 0, x, y) << 1 << endl;

    cout << "\n----- END -----" << endl;
}