#include <iostream>
using namespace std;

void insert(int arr[], int n) {
    int key = arr[n];
    int j = n - 1;

    // Move elements of arr[0..n-1], that are greater than key,
    // to one position ahead of their current position
    while (j >= 0 && arr[j] > key) {
        arr[j + 1] = arr[j];
        j = j - 1;
    }
    arr[j + 1] = key;
}

void sortArray(int arr[], int n) {
    // Base case
    if (n <= 1) {
        return;
    }

    // Recursively sort the first n-1 elements
    sortArray(arr, n - 1);

    // Insert the nth element into the sorted array
    insert(arr, n - 1);
}

int main() {
    int arr[5] = {3, 2, 5, 7, 6};

    sortArray(arr, 5);

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
