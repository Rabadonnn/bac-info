#include <iostream>
#include <math.h>

using namespace std;

int suma(int a, int b)
{
    int result = 0;

    for (int i = 1; i <= min(a, b); i++) {
        if (a % i == 0 && b % i == 0) {
            result += i;
        }
    }

    return result;
}

int main()
{
    int a = 20;
    int b = 12;

    cout << suma(a, b) << "\n";

    return 0;
}
