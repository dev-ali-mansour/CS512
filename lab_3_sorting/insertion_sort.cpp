#include <iostream>

using namespace std;

int main() {
    int array[] = {3, 1, 6, 2, 8, 12, 4};
    int size = sizeof(array) / sizeof(array[0]);
    int key, j;
    for (int i = 1; i < size; ++i) {
        key = array[i];
        j = i;

        while (j > 0 && array[j - 1] > key) {
            array[j] = array[j - 1];
            j--;
        }
        array[j] = key;
    }

    for (int i = 0; i < size; ++i)
        cout << array[i] << ", ";

    return 0;
}