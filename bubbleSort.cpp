#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int array[], int n)
{
    while (n >= 0)
    {
        for (int i = 1; i < n; i++)
        {
            int j = i - 1;
            if (array[i] < array[j])
            {
                swap(array[i], array[j]);
            }
        }
        n--;
    }
}
void print(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";

    }
}
int main()
{
    int array[6] = {22, 12, 16, 5, 2, 11};
    bubbleSort(array, 6);
    print(array, 6);

    return 0;
}