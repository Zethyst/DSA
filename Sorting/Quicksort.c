// PROGRAMMED BY AKSHAT JAISWAL
#include <stdio.h>
void display(int arr[], int n) // Utility function to display
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
}
void swap(int *x, int *y) // Utility function to swap
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int Partition(int arr[], int start, int end)
{
    int pivot = arr[end];    // Make last element as pivot
    int pivot_index = start; // Make pivot swapping index as first index
    for (int i = start; i < end; i++)
    {
        if (arr[i] < pivot) // Compare array iterative elements with considered pivot
        {
            swap(&arr[i], &arr[pivot_index]); // Swap if less than pivot
            pivot_index++;                    // To make sure swapping occurs in next index
        }
    }                                   // Once we are done all the smaller elements are leftof pivot index
    swap(&arr[pivot_index], &arr[end]); // Swap the pivot in that index
    return (pivot_index);
}
void Quicksort(int arr[], int start, int end)
{
    int pivot_index;
    if (start < end)
    {
        pivot_index = Partition(arr, start, end); // Pivot in middle array
        Quicksort(arr, start, pivot_index - 1);   // Further divide left half
        Quicksort(arr, pivot_index + 1, end);     // Further divide right half
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
    int start = 0, end = n - 1;
    Quicksort(arr, start, end);
    printf("\nAfter Sorting => ");
    display(arr, n);

    return 0;
}
// END OF LINE