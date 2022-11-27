// PROGRAMMED BY AKSHAT JAISWAL

#include <stdio.h>
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
}
void bubble(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main(void)
{
    int arr[100], n, item, flag = 0, pos;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the elements in the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nElements in the array are: ");
    display(arr, n);
    // Using Bubble Sort
    bubble(arr, n);
    printf("\nAfter Sorting => ");
    display(arr, n);
    return 0;
}

// END OF LINE