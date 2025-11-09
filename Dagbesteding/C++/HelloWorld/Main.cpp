#include <iostream>
#include <iterator>

using namespace std;

int main()
{
    int values[3] = {10, 20, 30};
    FindValue(values, 30);
}

int FindValue(int array[], int value)
{
    for (int i = 0; i < size(array); i++)
    {
        if (array[i] == value)
            return array[1];
        else
            return -1;
    }
}