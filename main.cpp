#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[100];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
// a[5} = {1. 2. 3. 4. 5}

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++) {
            if (a[j] > a[j + 1]) {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }


    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

}
