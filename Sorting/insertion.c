// PROGRAMMED BY AKSHAT JAISWAL
#include <stdio.h>
void insertion(int arr[], int n)
{
    int i = 1, j = 0, key = 0; // i is unsorted array index, j is sorted array index, key is element to place appropriately
    while (i < n)              // loop till unsorted reaches last element
    {
        key = arr[i];                  // assign key as unsorted array first index
        j = i - 1;                     // and j as one index below that
        while (j >= 0 && key < arr[j]) // loop until j hits appropriate index for key to insert
        {
            arr[j + 1] = arr[j]; // continuous swapping from right to left
            j--;
        }
        arr[j + 1] = key; // final insertion
        i++;
    }
}
int main(void)
{
    int n;
    printf("\nEnter the size of the array: ");
    scanf("%d", &n);
    int A[n];
    printf("\nEnter the elements in the array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("A[%d] => ", i);
        scanf("%d", &A[i]);
    }
    printf("\nUnsorted => ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", A[i]);
    }
    insertion(A, n);
    printf("\nSorted => ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", A[i]);
    }

    return 0;
}
// END OF LINE