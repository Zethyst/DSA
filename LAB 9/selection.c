// PROGRAMMED BY AKSHAT JAISWAL
#include <stdio.h>
void selection(int arr[], int n)
{
    int min;
    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
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
    selection(A, n);
    printf("\nSorted => ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", A[i]);
    }

    return 0;
}
// END OF LINE