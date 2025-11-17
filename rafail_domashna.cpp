#include<iostream>
using namespace std;

int main() {
    int i, n=10, arr[n], j, buf;

    for (i = 0; i < n; i++) cin >> arr[i];

    for (i = 0; n > i; i++)

    for (j = n - 1; j > i; j--)
        if (arr[j-1] >arr[j]) {
            buf = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = buf;
        }

    for (i = 0; i < n; i++) cout << arr[i] << "\n";
    
    return 0;
}