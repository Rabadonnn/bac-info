#include <iostream>

using namespace std;

int main()
{
    cout << "-----\nbac\n-----\n" << endl;

    /*
     * check this out for a better explanation
     * https://www.youtube.com/watch?v=GyrhrzKrVz0
     */

    char sentence[100];
    char result[100] = "";

    cin.getline(sentence, 100);

    char *word = strtok(sentence, " ");

    while (word)
    {
        int word_len = strlen(word);

        if (word_len > 2)
        {
            for (int i = 1; i < word_len; i++)
            {
                char temp = word[i];
                word[i] = word[i - 1];
                word[i - 1] = temp;
            }
        }

        strcat(result, word);
        strcat(result, " ");

        word = strtok(NULL, " ");
    }

    cout << result << endl;

    cout << "\n----- END -----" << endl;
}
