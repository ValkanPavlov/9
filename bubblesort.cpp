#include <iostream>
using namespace std;

int main()
{
    int N;

    cout << "Input the number of elements to sort: ";
    cin >> N;

    if (N<=0||N>1000)
    {
        cout << "The number entered is too small or large, exiting\n";
        return 1;
    }

    double arr[1000];
    bool sorted = 0;

    cout << "Input the unsorted array: ";

    for (int i = 0; i<N; ++i) cin >> arr[i];

    while (!sorted)
    {
        sorted = 1;
        for (int i = 0; i<N-1; ++i)
        {
            if (arr[i]>arr[i+1])
            {
                swap(arr[i], arr[i+1]);
                sorted = 0;
            }
        }
    }

    cout << "The sorted array is:";

    for (int i = 0; i<N; ++i) cout << ' ' << arr[i];
    cout << '\n';
}
