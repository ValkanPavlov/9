#include <iostream>

using namespace std;

int main() {

    int arr[100];

    int arrSize = 0;

    int temp;

    cout << "Enter number for how many elements you want: ";

    cin >> arrSize;

    for (int i = 0; i < arrSize; i++) {

        cin >> arr[i];

    }

    for (int i = 0; i < arrSize - 1; i++) {

        for (int j = 0; j < arrSize - i - 1; i++) {

            if (arr[j] > arr[j + 1]) {

                temp = arr[j];

                arr[j] = arr[j + 1];

                arr[j + 1] = temp;

            }

        }

    }

    for (int i = 0; i < arrSize; i++) {

        cout << "Index of the element is: " << i << " = " << arr[i] << endl;

    }

}

