#include <iostream>
using namespace std;
int main() {
    const int SIZE = 5;
    int arr[SIZE] = {64, 34, 25, 12, 22};
    
    // Bubble Sort Algorithm
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    // Print sorted array
    cout << "Sorted array: \n";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}