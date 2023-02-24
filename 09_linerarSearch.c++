#include <iostream>
using namespace std;
bool lineraSearch(int arr[], int n, int target)
{
    if (n == 0)
    {
        return false;
    }
    if (arr[0] == target)
    {
        return true;
    }
    return lineraSearch(arr + 1, n - 1, target);
}
int main()
{
    int arr[] = {10,5,3,7,9,6};
    if (lineraSearch(arr, 6, 6))
    {
        cout << "FOUND";
    }
    else
    {
        cout << "NOT FOUND";
    }
    return 0;
}