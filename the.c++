#include <iostream>
using namespace std;

int main() {
    const int n = 10;
    int arr[n] = {64, 34, 25, 12, 22, 11, 90, 88, 76, 50};
    bool swapped;

    cout << "Несортиран масив: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
    
        if (!swapped)
            break;
    }

    cout << "Сортиран масив: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
