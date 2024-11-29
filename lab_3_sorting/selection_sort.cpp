#include <iostream>

using namespace std;

void selection_sort(int arr[], int size);

int main() {
    int array[] = {3, 1, 6, 2, 8, 12, 4};
    int size = sizeof(array) / sizeof(array[0]);

    selection_sort(array, size);

    for (int i = 0; i < size; ++i)
        cout << array[i] << ", ";

    return 0;
}

void selection_sort(int arr[], int size) {
    int temp, minIndex;

    for (int i = 0; i < size; ++i) {
        minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[minIndex] > arr[j])
                minIndex = j;
        }
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}