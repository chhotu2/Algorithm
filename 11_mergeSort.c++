#include <iostream>
using namespace std;

// void merge(int *arr, int start, int end)
// {
//     int mid = start + (end - start) / 2;
//     int len1 = mid - start + 1;
//     int len2 = end - mid;

//     int *arr1=new int[len1];
//     int *arr2=new int[len2];
//     int k = 0;
//     for (int i = 0; i < len1; i++)
//     {
//         arr1[i] = arr[k++];
//     }

//     k = mid + 1;
//     for (int i = 0; i < len2; i++)
//     {
//         arr2[i] = arr[k++];
//     }

//     int index1 = 0;
//     int index2 = 0;
//     int i = 0;
//     while (index1 <len1 && index2 < len2)
//     {
//         if (arr1[index1] < arr2[index2])
//         {
//             arr[i++] = arr1[index1++];
//             // i++;
//             // index1++;
//         }

//         else
//         {
//             arr[i++] = arr2[index2++];

//             // i++;
//             // index2++;
//         }
//     }

//     while (index1 < len1)
//     {
//         arr[i++] = arr1[index1++];
//         // i++;
//         // index1++;
//     }

//     while (index2 < len2)
//     {
//         arr[i++] = arr2[index2++];
//         // i++;
//         // index2++;
//     }

//     delete []arr1;
//     delete [] arr2;
// }
// void print(int *arr,int start,int end){
//     for(int i=start;i<=end;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// void mergeSort(int arr[], int start, int end)
// {
//     print(arr,start,end);
//     if (start > end)
//     {
//         return;
//     }
//     int mid = start + (end - start) / 2;

//     mergeSort(arr, start, mid);
//     mergeSort(arr, mid + 1, end);

//     merge(arr,start,end);
// }

void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int k = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[k++];
    }

    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[k++];
    }

    int index1 = 0;
    int index2 = 0;
    k = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[k++] = first[index1++];
        }

        else
        {
            arr[k++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[k++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[k++] = second[index2++];
    }
}
void mergeSort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int mid = s + (e - s) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merge(arr, s, e);
}
int main()
{
    int arr[] = {6, 5, 4, 3, 2, 1};
    int start = 0;
    int end = 5;
    mergeSort(arr, start, end);
    //  merge(arr,start,end);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}