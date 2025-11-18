#include <iostream>
using namespace std;

int main() {
    int arr[100], n, temp;
    cin >> n;
    for (int k = 0; k < n; k = k + 1) 
    {
        cin >> arr[k];
    }
    for (int h = 0; h < n - 1; h = h + 1) 
    {
        for (int m = 0; m < n - 1 - h; m = m + 1) 
        {
            if (arr[m] > arr[m + 1]) 
            {
                temp = arr[m];
                arr[m] = arr[m + 1];
                arr[m + 1] = temp;
            }
        }
    }
    for (int l = 0; l < n; l = l + 1) 
    {
        cout << arr[l] << " ";
    }
}