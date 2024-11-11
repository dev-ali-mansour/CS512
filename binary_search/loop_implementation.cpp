#include <iostream>

using namespace std;

int binarySearch(const int arr[], int size, int x);

int main() {
    int arr[] = {3, 4, 5, 6, 7, 8, 12, 14};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x;
    cout << "Please enter an integer:";
    cin >> x;
    int index = binarySearch(arr, size, x);
    if (index == -1)
        cout << x << " is not found\n";
    else
        cout << x << " is found at index " << index << endl;
}

int binarySearch(const int arr[], int size, int x) {
    int start = 0;
    int end = size - 1;
    int mid;
    while (start <= end) {
        mid = (start + end) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}