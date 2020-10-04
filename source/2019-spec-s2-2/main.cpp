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
    cout << "----- 2019-spec-s2-2 -----\n" << endl;

    tdata d = { 13, 9 };
    eveniment e = { 120, { 12, 9 } };

    int exp = (e.dev.luna < d.luna) || (e.dev.luna <= d.luna && e.dev.zi < d.zi);

    cout << "\n----- END -----" << endl;
}