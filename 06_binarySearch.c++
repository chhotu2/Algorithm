#include <iostream>
using namespace std;

void print(int arr[], int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
bool binarySearch(int arr[], int start, int end, int target)
{
    cout << endl;

    print(arr, start,end);

    if (start > end)
    {
        return false;
    }
    int mid = start + (end - start) / 2;
    if (arr[mid] == target)
    {
        return true;
    }

    if (arr[mid] > target)
    {
        return binarySearch(arr, start, mid - 1, target);
    }

    else
    {
        return binarySearch(arr, mid + 1, end, target);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    if (binarySearch(arr, 0, 5, 6))
    {
        cout << "FOUND";
    }
    else
    {
        cout << "NOT FOUND";
    }
    return 0;
}