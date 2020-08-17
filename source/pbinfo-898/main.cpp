#include <iostream>

using namespace std;

int sumfactcif(int n)
{
    if (n == 0)
    {
        return 1;
    }

    int sum = 0;
    while (n != 0)
    {
        int c = n % 10;
        n /= 10;

        int factorial = 1;

        for (int i = 1; i <= c; i++)
        {
            factorial *= i;
        }
        sum += factorial;
    }
    return sum;
}

int main()
{
    cout << "-----\npbinfo\n-----\n" << endl;
    cout << "\n----- END -----" << endl;
}
