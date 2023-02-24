#include <iostream>
using namespace std;

int powerofTwo(int n)
{
    if (n == 0)
    {
        return 1;
    }

    int ans = 2 * powerofTwo(n - 1);
    return ans;
}

int myPow(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }

    int ans = x * myPow(x, n - 1);

    return ans;
}

bool isPowerOfFour(int n)
{
    if (n == 1)
    {
        return true;
    }
    if(n==0){
        return false;
    }
    return isPowerOfFour(n/4);
}
int main()
{
    int n;
    cin >> n;
    cout << myPow(2, n);
    return 0;
}