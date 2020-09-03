#include <iostream>

using namespace std;

struct punct {
    int x;
    int y;
} p;

struct cerc {
    struct punct centru;
    float raza;
} c;

int main()
{
    cout << "----- bac -----\n"
         << endl;

    c.centru.x = 10;
    c.centru.y = 15;
    p.x = 10;
    p.y = 15;

    int expresie = c.centru.x == p.x && c.centru.y == p.y;

    cout << expresie << endl;

    cout << "\n----- END -----" << endl;
}
