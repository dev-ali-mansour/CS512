#include <iostream>

using namespace std;

void bubble_sort(int arr[], int size);

int main() {
    int array[] = {3, 1, 6, 2, 8, 12, 4};
    int size = sizeof(array) / sizeof(array[0]);

    bubble_sort(array, size);

    for (int i = 0; i < size; ++i)
        cout << array[i] << ", ";

    return 0;
}

void bubble_sort(int arr[], int size) {
    int temp;
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}