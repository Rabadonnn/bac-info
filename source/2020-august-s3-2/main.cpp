#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    cout << "----- 2020-august-s3-2 -----\n" << endl;

    // citim propozitia
    char sentence[100];
    cin.getline(sentence, 100);

    char result[101];
    int word_count = 0;

    // impartim propozitia in cuvinte, separate prin spatiu
    char *token = strtok(sentence, " ");
    while (token != NULL) {
        int tok_len = strlen(token);

        // daca numarul de litere din cuvant nu este 1 si nu este par
        // inversam cuvantul si il adaugam in rezultat
        if (tok_len != 1 && tok_len % 2 != 0) {
            char word[tok_len + 1];

            for (int i = 0; i < tok_len; i++) {
                word[i] = token[tok_len - i - 1];
            }
            word[tok_len] = '\0';

            // daca cuvantul inversat nu este acelasi cu cuvantul original, il adaugam la
            // rezultat
            // tre sa adaugam si spatiu
            if (word != token) {
                strcat(result, word);
                strcat(result, " ");
            }
        } else {
            // altfel adaugam cuvantul original la rezultat
            strcat(result, token);
            strcat(result, " ");
        }

        token = strtok(NULL, " ");
    }

    if (word_count > 0) {
        cout << result << endl;
        // daca nu am inversat niciun cuvant afisam nu exista
    } else {
        cout << "nu exista" << endl;
    }

    cout << "\n----- END -----" << endl;
}
