#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int l, int m, int r) {
    int n1 = m - l + 1; // Size of left subarray
    int n2 = r - m;     // Size of right subarray

    vector<int> L(n1), R(n2); // Temporary arrays

    // Copy data to temporary arrays L[] and R[]
    for (int i = 0; i < n1; i++) {
        L[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++) {
        R[i] = arr[m + 1 + i];
    }

    // Merge the temporary arrays back into arr[l..r]
    int i = 0, j = 0; // Initial indexes of first and second subarrays
    int k = l;        // Initial index of merged subarray

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) { // Corrected from R[i] to R[j]
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of L[] if any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy remaining elements of R[] if any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergesort(vector<int>& arr, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2; // Prevents overflow

        mergesort(arr, l, m);
        mergesort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main() {
    vector<int> arr = {5, 4, 3, 2, 1};
    int n = arr.size();

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    mergesort(arr, 0, n - 1);

    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}