#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    bool swapped;

    for (int i = 0; i < n - 1; i++) {
        swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // разменяме елементите
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // ако не е имало размяна → масивът вече е подреден
        if (!swapped)
            break;
    }
}

int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};

    cout << "Before sorting: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    bubbleSort(arr);

    cout << "After sorting:  ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}
