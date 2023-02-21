#include <iostream>
using namespace std;
// count number of letters in string array

// prototype
int checkCondition(int index, char letter);

string sentence[20];

main()
{
    int index, count = 0;
    char letter;

    cout << "Enter number of words you want to enter: ";
    cin >> index;

    for (int idx = 0; idx < index; idx++)
    {
        cout << "Enter word " << idx + 1 << " : ";
        cin >> sentence[idx];
    }
    cout << "Enter letter you want to count: ";
    cin >> letter;

    count = checkCondition(index,letter);

    if (count != 0)
    {
        cout << "The letter " << letter << " occured " << count << " times.";
    }
    else
    {
        cout << "Word does not occured.";
    }
}

int checkCondition(int index, char letter)
{
    string word;
    int count = 0;
    for (int idx = 0; idx < index; idx++)
    {
        word = sentence[idx];
        int size = word.length();
        for (int i = 0; i < size; i++)
        {
            if (word[i] == letter)
            {
                count++;
                word[idx] = ' ';
            }
        }

        /*int i = 0
          while(word[i] != '\0')
          {
            if(word[i] == letter)
            {
                count++;
            }
            i++
          }*/
    }

    return count;
}