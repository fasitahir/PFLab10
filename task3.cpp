#include <iostream>
using namespace std;

// store numbers greater than left and right number


main()
{
    int size;
    int count = 0;
    bool check = false;

    cout << "Enter number of digits you wnt to enter: ";
    cin >> size;
    int numbers[size];

    int store[size];

    for (int idx = 0; idx < size; idx++)
    {
        cout << "Enter number " << idx + 1 << " :";
        cin >> numbers[idx];
    }

    for (int idx = 1; idx < size - 1; idx++)
    {

        if (numbers[idx - 1] < numbers[idx] && numbers[idx] > numbers[idx + 1])
        {
            store[count] = numbers[idx];
            count++;
        }
    }
    if (count != 0)
    {
        cout << "[";
        for (int i = 0; i < count; i++)
        {
            cout << store[i];
            if (i < count - 1)
            {
                cout << " , ";
            }
        }
        cout << "]";
    }

    else
    {
        cout << "No progress day";
    }
}


