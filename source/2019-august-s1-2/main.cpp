#include <iostream>

using namespace std;

void f(int i, int j)
{
    cout << i << " ";
    if (i != j) {
        if (i < j) {
            i = i + j;
            j = i - j;
            i = i - j;
        }
        f(i - j, j);
    }
}

int main()
{
    cout << "----- bac -----\n"
         << endl;
    f(75, 30);

    // Correct answer: (C)

    /*
   * on subjects like this
   * you should take the program step by step like a compiler
   * note the variables with values to one side
   * and the instructions on the other side
   */

    cout << "\n----- END -----" << endl;
}
