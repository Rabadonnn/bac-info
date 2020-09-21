#include <iostream>

using namespace std;

struct eveniment
{
    struct
    {
        int zi;
        int luna;
    } data;

    int id;
};

int main()
{
    cout << "----- 2019-sim-s2-2 -----\n" << endl;

    eveniment e = { 13, 9, 1 };

    cout << e.data.zi << endl;
    cout << e.data.luna << endl;
    cout << e.id<< endl;

    cout << "\n----- END -----" << endl;
}
