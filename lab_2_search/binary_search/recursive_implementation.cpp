#include <iostream>

using namespace std;

int binary_search(const int arr[], int start, int end, int x);

int main() {
    int arr[] = {3, 4, 5, 6, 7, 8, 12, 14};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x;
    cout << "Please enter an integer:";
    cin >> x;
    int start = 0;
    int end = size - 1;
    int index = binary_search(arr, start, end, x);
    if (index == -1)
        cout << x << " is not found\n";
    else
        cout << x << " is found at index " << index << endl;
}

int binary_search(const int arr[], int start, int end, int x) {
    int mid = (start + end) / 2;
    if (arr[mid] == x)
        return mid;
    if (start > end)
        return -1;
    if (arr[mid] < x)
        return binary_search(arr, mid + 1, end, x);
    else
        return binary_search(arr, start, mid - 1, x);
}