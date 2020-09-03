#include <iostream>

void recursivity(int n, int& i, int& p)
{
    if (n <= 9) {
        if (n % 2 == 0) {
            p = n;
            i = 0;
        } else {
            p = 0;
            i = n;
        }
    } else {
        recursivity(n / 10, i, p);
        if (n % 2 == 0) {
            p = p * 10 + n % 10;
        } else {
            i = i * 10 + n % 10;
        }
    }
}

int main()
{
    int n, i, p;
    std::cin >> n;

    recursivity(n, i, p);

    std::cout << "i: " << i << "\n";
    std::cout << "p: " << p << "\n";

    return 0;
}