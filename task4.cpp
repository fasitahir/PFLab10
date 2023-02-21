#include <iostream>
using namespace std;

// check if cycle is repeating or not

// global data
int array[100];

// prototype
bool isRepeating(int cycleLength);

main()
{
    int length, cycleLength;

    cout << "Enter length of array: ";
    cin >> length;

    for (int i = 0; i < length; i++)
    {
        cout << "Enter Number " << i + 1 << " :";
        cin >> array[i];
    }

    cout << "Enter length of cycle: ";
    cin >> cycleLength;
    if (length > cycleLength)
    {
        cout << isRepeating(cycleLength);
    }

    else
    {
        cout << 1;
    }
}

bool isRepeating(int cycleLength)
{
    int count = 0;
    bool check = false;

    for (int i = 0; i < cycleLength; i++)
    {
        // cout << array[i];

        // cout << array[i + cycleLength];

        if (array[i] == array[i + cycleLength])
        {
            count++;
        }
        else if(array[i] == array[i+1])
        {
            count ++;
        }
    }

    if (count == cycleLength)
    {
        check = true;
    }

    return check;
}