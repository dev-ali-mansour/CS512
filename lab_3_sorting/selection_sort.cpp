#include <iostream>

using namespace std;

int main() {
    int array[] = {3, 1, 6, 2, 8, 12, 4};
    int size = sizeof(array) / sizeof(array[0]);
    int temp, minIndex;

    for (int i = 0; i < size; ++i) {
        minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (array[minIndex] > array[j])
                minIndex = j;
        }
        temp = array[i];
        array[i] = array[minIndex];
        array[minIndex] = temp;
    }

    for (int i = 0; i < size; ++i)
        cout << array[i] << ", ";

    return 0;
}