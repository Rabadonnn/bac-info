#include <iostream>

using namespace std;

struct punct {
    float x;
    float y;
};

struct cerc {
    struct punct centru;
    float raza;
} fig;

// functie de test
void print()
{
    cout << "fig.centru.x: " << fig.centru.x << endl;
    cout << "fig.centru.y: " << fig.centru.y << endl;
    cout << "fig.raza: " << fig.raza << endl;
    cout << "\n";
}

int main()
{
    cout << "----- 2019-iulie-s2-3 -----\n"
         << endl;

    // sunt multe metode pentru a declara o structura
    // cred ca pentru bac cel mai bine se potriveste metoda 2

    fig.centru = (punct) { 0, 0 };
    fig.raza = 1;

    print();

    // sau

    fig.centru.x = 0;
    fig.centru.y = 0;
    fig.raza = 1;

    print();

    // sau

    fig = (cerc) { (punct) { 0, 0 }, 1 };

    print();

    // sau

    fig = (cerc) { .centru = (punct) { .x = 0, .y = 0 }, .raza = 1 };
    print();

    cout << "\n----- END -----" << endl;
}
