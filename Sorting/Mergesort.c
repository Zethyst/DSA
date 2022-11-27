// PROGRAMMED BY AKSHAT JAISWAL
#include <stdio.h>
int B[100];
int temp[100];
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
}
void merge(int arr[], int low, int mid, int high)
{
    int l1 = low, l2 = mid + 1; // l1 to trace left subarray elements,l2 to trace right subarray elements
    int i = low;                // i to trace temp array elements
    while (l1 <= mid && l2 <= high)
    {
        if (arr[l1] <= arr[l2]) // Compare and insert
        {
            B[i] = arr[l1];
            i++;
            l1++;
        }
        else
        {
            B[i] = arr[l2];
            i++;
            l2++;
        }
    }
    while (l1 <= mid) // Emptying left subarray
    {
        B[i] = arr[l1];
        i++;
        l1++;
    }
    while (l2 <= high) // Emptying right subarray
    {
        B[i] = arr[l2];
        i++;
        l2++;
    }

    for (int i = low; i <= high; i++) // Transfering temp array back to original array
    {
        arr[i] = B[i];
    }
}
void merge_sort(int arr[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        merge_sort(arr, low, mid);      // Make left half
        merge_sort(arr, mid + 1, high); // Make right half
        merge(arr, low, mid, high);     // Merge both the halves
    }
}
int main(void)
{
    int n;
    printf("\nEnter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the elements in the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nOriginal Array => ");
    display(arr, n);
    int low = 0;
    int high = n - 1;
    merge_sort(arr, low, high);
    printf("\nSorted Array => ");
    display(arr, n);
    printf("\n");
    return 0;
}
// END OF LINE