#include <iostream>
#include <iterator>
#include <memory>

using namespace std;
int FindValue(int array[], size_t size, int value);
void BubbleSort(int array[], size_t size);
void swap(int numbers[], int i, int j);

int main()
{
    int capacity = 5;
    int *numbers = new int[capacity];
    int entries = 0;
    while (true)
    {
        cout << "Number: ";
        cin >> numbers[entries];
        if (cin.fail())
            break;
        entries++;
        if (entries == capacity)
        {
            capacity *= 2;
            int *temp = new int[capacity];
            for (int i = 0; i < entries; i++)
            {
                temp[i] = numbers[i];
            }
            delete[] numbers;
            numbers = temp;
        }
    }
    for (int i = 0; i < entries; i++)
    {
        cout << numbers[i] << endl;
    }
    delete[] numbers;
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