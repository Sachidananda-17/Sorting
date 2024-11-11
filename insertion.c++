#include <iostream>
#include <vector>
using namespace std;

// Insertion Sort function that takes a vector by reference and sorts it
void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];         // Element to be positioned
        int j = i - 1;
        
        // Move elements of arr[0...i-1] that are greater than key
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;          // Insert key at the correct position
    }
}

// Function to print elements of the vector
void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    // Initialize vector with elements
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};

    cout << "Original array: ";
    printArray(arr);

    // Sort the vector
    insertionSort(arr);

    cout << "Sorted array: ";
    printArray(arr);

    return 0;
}
