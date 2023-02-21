#include <iostream>
using namespace std;

main()
{

    string sentence;
    int first = 0;
    

    cout << "Enter sentence: ";
    getline(cin, sentence);

    int size = sentence.length();

    cout << size << endl;

    string word[size];
    string next;

    for(int i = size ;i > 0 ; i --)
    {
       
        while(sentence[i] != ' ');
        {
            for(int j = 0  ;  j < size ; j++)
            {
                word[j] = sentence[i];
            }
        }
    }

    for(int i = 0 ; i < size ; i ++)
    {
        cout << word[i];
    }

}