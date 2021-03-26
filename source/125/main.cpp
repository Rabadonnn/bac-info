#include <iostream>

int recursive(int v[], int n)
{
    if (n == 0)
        return 0;
    else if (n % 2 == 0)
        return recursive(v, n - 1) + v[n];
    else
        return recursive(v, n - 1) - v[n];
}

int main()
{
    int v[] = { 4, 5, 6, 3, 2, 9 };
    int n = 6;

    int r = recursive(v, n);
    std::cout << r;

    return 0;
}
