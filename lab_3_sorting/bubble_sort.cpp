#include <iostream>

using namespace std;

int main() {
    int array[] = {3, 1, 6, 2, 8, 12, 4};
    int size = sizeof(array) / sizeof(array[0]);
    int temp;
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (array[i] > array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    for (int i = 0; i < size; ++i)
        cout << array[i] << ", ";

}