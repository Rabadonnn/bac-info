#include <iostream>

using namespace std;

struct calculator {
    struct memorie {
        // memory can only be positive so we use unsigned int instead of just int
        unsigned int interna;
        unsigned int externa;
    } memorie;

    int monitor;
};

int main()
{
    cout << "-----\nbac\n-----\n"
         << endl;

    calculator c;

    // 1st method

    c = (calculator) { 100, 200, 2 };

    cout << "mem interna: " << c.memorie.interna << endl;
    cout << "mem externa: " << c.memorie.externa << endl;
    cout << "monitor: " << c.monitor << endl
         << endl;

    // 2nd method

    c = (calculator) { {
                           100,
                           200,
                       },
        2 };

    cout << "mem interna: " << c.memorie.interna << endl;
    cout << "mem externa: " << c.memorie.externa << endl;
    cout << "monitor: " << c.monitor << endl
         << endl;

    // 3rd method

    c.memorie.interna = 100;
    c.memorie.externa = 200;
    c.monitor = 2;

    cout << "mem interna: " << c.memorie.interna << endl;
    cout << "mem externa: " << c.memorie.externa << endl;
    cout << "monitor: " << c.monitor << endl;

    // all 3 ways produce the exact same result

    cout << "\n----- END -----" << endl;
}
