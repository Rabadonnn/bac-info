#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    cout << "----- 2019-spec-s3-2 -----\n" << endl;

    char text[100];
    cin.getline(text, 100);

    int n;
    cin >> n;

    char *token = strtok(text, " ");
    while (token != NULL)
    {
        if (strlen(token) == n)
        {
            cout << token << endl;
        }
        token = strtok(NULL, " ");
    }

    cout << "\n----- END -----" << endl;
}