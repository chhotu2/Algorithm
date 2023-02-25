#include <iostream>
#include <vector>
using namespace std;

int partation(vector<int> &nums, int start, int end)
{
    int pivot = nums[0];
    int cnt = 0;

    for (int i = start + 1; i < nums.size(); i++)
    {
        if (nums[i] <= pivot)
        {
            cnt++;
        }
    }

    int pivotIndex = start + cnt;
    swap(  nums[pivotIndex],nums[start]);
    // cout << pivotIndex;
    int i = start;
    int j = end ;
     

    while (i < pivotIndex && j > pivotIndex)
    {
        if (nums[i] <= pivot)
        {
            i++;
        }

        if (nums[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(nums[i++], nums[j--]);
        }
    }

    return pivotIndex;
}

void print(vector<int>nums){
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}

void quickSort(vector<int> &nums, int start, int end)
{
    //Base Condition
    if (start >= end)
    {
        return;
    }
    int p = partation(nums, start, end);
    
    quickSort(nums, start, p);
    quickSort(nums, p + 1, end);
}

int main()
{
    vector<int> nums{5, 2, 3, 1};
    cout << "Array before sorting" << endl;
    print(nums);
     
    quickSort(nums, 0, 3);
    cout<<endl;
     cout << "Array After sorting" << endl;
     print(nums);
    return 0;
}
