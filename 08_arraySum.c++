#include <iostream>
using namespace std;

int sum(int arr[], int n)
{
    int ans = 0;
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        ans = arr[0];
        return ans;
    }

    ans = ans + arr[0];

    return ans + sum(arr + 1, n - 1);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout << sum(arr, 5);
    return 0;
}