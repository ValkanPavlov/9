#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    bool swapped;

    for (int i = 0; i < n - 1; i++) {
        swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                arr[j]    += arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j]    -= arr[j + 1];
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90, 88, 45, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}