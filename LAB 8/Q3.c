// PROGRAMMED BY AKSHAT JAISWAL

#include <stdio.h>
void bubble();
void selection();
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
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    // Using Bubble Sort
    // bubble(arr, n);
    selection(arr, n);
    printf("\nAfter Sorting => ");

    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    return 0;
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

// END OF LINE