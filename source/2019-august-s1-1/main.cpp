#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    cout << "----- bac 2019 august s1 - 1 (explained) -----\n" << endl;

    int a = 'm' < 'n';
    int b = 'm' == 'M';
    int c = 'M' == 'm' + 'N' - 'n';
    int d = 'N' == 'M' + 1;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    
    cout << endl;
    // (B)
    //
    // check this out for explanations
    // https://stackoverflow.com/questions/22736348/char-comparison-in-c
    
    cout << (int)'m' << " " << (int)'M';
    // returns 109 77

    /*
     * every char is basically an integer in ASCII code
     * if we convert 'm' and 'M' to integers 'M' is not equal to 'n'
     * so:
     *
     *  (B) is the only condition that returns false 
     */

    cout << endl;
    cout << "\n----- END -----" << endl;
}
