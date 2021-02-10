#include <iostream>
#include <cstring>

using namespace std;

int main()
{
         << endl;

    char text[] = "am 190 de nuci si 70 de castane";

    char *token = strtok(text, " ");
    int max = -1;
    char *maxWord;
    while (token)
    {
        int cifra = token[0] - '0';
        if (cifra / 10 == 0 && cifra > max)
        {
            max = cifra;
            maxWord = token;
        }
        token = strtok(NULL, " ");
    }

    if (max == -1)
    {
        cout << "nu exista" << endl;
    }
    else
    {
        cout << maxWord << endl;
    }
}