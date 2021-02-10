#include <iostream>

using namespace std;

void f(int m, int n, int d)
{
    if (n % d == 0 && m % d == 0)
    {
        cout << d;
    }
    else
    {
        f(m, n, d - 1);
    }
}

int main()
{

    // 1. c
    
    // 2. b
    
    // 3. a
    
    // 4 - 5. invata arbori grafuri bai caine
}