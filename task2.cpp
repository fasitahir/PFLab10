#include <iostream>
using namespace std;
// global data
int miles[10];

// prototype

int progressDay(int size);

// return progress day
main()
{
    int size;
    int count = 0;

    cout << "Enter how many weeks you ran: ";
    cin >> size;

    for (int idx = 0; idx < size; idx++)
    {
        cout << "Enter number of miles you ran in " << idx + 1 << " week: ";
        cin >> miles[idx];
    }
    
    count = progressDay(size);
    cout << count;
}

int progressDay(int size)
{
    int count = 0;

    for (int idx = 0; idx < size - 1; idx++)
    {

        if (miles[idx] < miles[idx + 1])
        {
            count++;
        }
    }

    return count;
}