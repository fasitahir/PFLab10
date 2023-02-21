#include <iostream>
using namespace std;

main()
{

    int temp;

    int weights[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter weight " << i + 1 << " : ";
        cin >> weights[i];
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (weights[i] > weights[j])
            {
                temp = weights[i];
                weights[i] = weights[j];
                weights[j] = temp;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << weights[i] << " ";
    }
}