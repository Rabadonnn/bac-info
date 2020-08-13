#include <iostream>

using namespace std;

void f(int i, int v[4])
{
    if (i >= 3)
    {
        v[i] = v[i] + 1;
    }
    else
    {
        f(i + 1, v);
    }
    cout << v[i] << endl;
}

int main()
{
    int v[] = {0,2,0,1};
    f(0, v);
    return 0;
}
