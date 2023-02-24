#include <iostream>
using namespace std;

int partation(int *arr, int s, int e)
{
    int pivot = arr[s];
    int cnt = 0;
    for (int i = 0; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            cnt++;
        }
    }

    int pivotIndex = s + cnt;
    swap(pivot, arr[pivotIndex]);

    int i = s;
    int j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}
void quickSort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int p = partation(arr, s, p);
    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}
int main()
{
    int arr[] = {6, 5, 4, 3, 2, 1};
    int start = 0;
    int end = 5;
    quickSort(arr, start, end);
     
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}