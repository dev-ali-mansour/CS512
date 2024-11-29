#include <iostream>

using namespace std;

void insertion_sort(int arr[], int size);

int main() {
    int array[] = {3, 1, 6, 2, 8, 12, 4};
    int size = sizeof(array) / sizeof(array[0]);

    insertion_sort(array, size);

    for (int i = 0; i < size; ++i)
        cout << array[i] << ", ";

    return 0;
}

void insertion_sort(int arr[], int size) {
    int key, j;
    for (int i = 1; i < size; ++i) {
        key = arr[i];
        j = i;

        while (j > 0 && arr[j - 1] > key) {
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = key;
    }
}