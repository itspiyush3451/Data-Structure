#include <iostream>
using namespace std;

// Function to partition the array
int partition(int arr[], int low, int high) {
    int pivot = arr[low]; // Choosing the first element as pivot
    int i = low + 1; // Start from the next element
    int j = high; // Start from the end of the array

    while (i <= j) {
        // Increment i while elements are less than or equal to pivot
        while (i <= high && arr[i] <= pivot) {
            i++;
        }
        // Decrement j while elements are greater than pivot
        while (j >= low && arr[j] > pivot) {
            j--;
        }
        // Swap elements if i is less than j
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    // Place the pivot in its correct position
    swap(arr[low], arr[j]);
    return j; // Return the index of the pivot
}

// Quick Sort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int partitionIndex = partition(arr, low, high);
        // Recursively sort elements before and after partition
        quickSort(arr, low, partitionIndex - 1);
        quickSort(arr, partitionIndex + 1, high);
    }
}

// Main function
int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Given array is: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    quickSort(arr, 0, size - 1);

    cout << "Sorted array is: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
