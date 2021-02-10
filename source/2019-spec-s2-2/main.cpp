#include <iostream>

using namespace std;

struct tdata
{
    int zi;
    int luna;
};

struct eveniment
{
    int nr;
    struct tdata dev;
};

int main()
{

    tdata d = { 13, 9 };
    eveniment e = { 120, { 12, 9 } };

    int exp = (e.dev.luna < d.luna) || (e.dev.luna <= d.luna && e.dev.zi < d.zi);
}