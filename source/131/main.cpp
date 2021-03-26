#include <iostream>

using namespace std;

struct triunghi
{
    struct punct
    {
        int x;
        int y;
    } A, B, C;
};

int main()
{
    cout << "----- model-1-s2-2 -----\n"
         << endl;

    triunghi t = {{0, 0}, {2, 2}, {-2, 2}};

    cout << "\n----- END -----" << endl;
}