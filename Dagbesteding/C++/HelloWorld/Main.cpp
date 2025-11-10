#include <iostream>
#include <iterator>

using namespace std;
int FindValue(int array[], size_t size, int value);
void BubbleSort(int array[], size_t size);
void swap(int numbers[], int i, int j);

int main()
{
    int numbers[] = {10, 20, 30};
    int *ptr = &numbers[size(numbers) - 1];
    while (ptr >= numbers)
    {
        cout << *ptr << endl;
        ptr--;
    }
}

int FindValueLinear(int array[], size_t size, int value)
{
    for (size_t i = 0; i < size; i++)
    {
        // cout << array[i];
        if (array[i] == value)
            return i;
    }
    return -1;
}

void swap(int numbers[], int i, int j)
{
    int temp = numbers[i];
    numbers[i] = numbers[j];
    numbers[j] = temp;
}

void swapWithPointers(int *i, int *j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}

void BubbleSort(int array[], size_t size)
{
    for (size_t pass = 0; pass < size; pass++)
    {
        for (size_t i = 0; i < size; i++)
        {
            if (array[i] > array[i + 1])
                swap(array, i, i + 1);
        }
    }
}