#include <iostream>

using namespace std;

int linearSearch(const int arr[], int size, int x);

int main() {
    int arr[] = {2, 5, 6, 7, 2, 3, 5, 14, 39};
    int x;
    cout << "Please enter an integer:";
    cin >> x;
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = linearSearch(arr, size, x);
    if (index == -1)
        cout << x << " is not found" << std::endl;
    else
        cout << x << " is found at index " << index << endl;
    return 0;
}

int linearSearch(const int arr[],int size, int x) {
    int index = -1;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == x) {
            index = i;
            break;
        }
    }
    return index;
}
