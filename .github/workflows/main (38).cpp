#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int numbers[] = { 5 ,2 ,9 ,1 ,3 };
    int n = sizeof(numbers) / sizeof(numbers[0]);
    
    for (int i = 0; i < n - 1; i++)
    {
        for (int i = 0; i < n - 1; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                int temp = number[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout << numbers[i] << " ";
    }
    
}