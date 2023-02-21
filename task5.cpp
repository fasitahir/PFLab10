#include <iostream>
using namespace std;

main()
{
    int size, box;
    cout << "Enter number of boxes: ";
    cin >> box;
    int area, result = 0;

    size = box * 3;
    int dimensions[size];
    for (int idx = 0; idx < size; idx++)
    {
        cout << "Enter Number: ";
        cin >> dimensions[idx];
    }

    for (int j = 0; j < size; j += 3)
    {

        area = dimensions[j] * dimensions[j + 1] * dimensions[j + 2];
        result = area + result;
    }
    cout << result;
}