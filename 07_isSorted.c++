#include <iostream>
using namespace std;
bool isSorted(int arr[], int n)
{
    if (n == 1 || n == 0)
    {
        return true;
    }

    if (arr[0] > arr[1])
    {
        return false;
    }

    return isSorted(arr + 1, n - 1);
}
int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    if (isSorted(arr, 5))
    {
        cout << "TRUE";
    }
    else
    {
        cout << "FALSE";
    }
    return 0;
}