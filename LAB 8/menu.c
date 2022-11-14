// PROGRAMMED BY AKSHAT JAISWAL
#include <stdio.h>
#include <stdlib.h>
int ch, size, *arr, flag = 0, item;
void sort(int arr[], int n)
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
void binary_search(int arr[], int n)
{
    int lb = 0, ub = size - 1, pos;
    printf("\n\nEnter the item you wanna search: ");
    scanf("%d", &item);
    while (lb <= ub)
    {
        pos = (lb + ub) / 2;
        if (arr[pos] > item)
            ub = pos - 1;
        if (arr[pos] < item)
            lb = pos + 1;
        if (item == arr[pos])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("\nSearch Successfull!!\nItem in position no. %d", pos + 1);
    else
        printf("\nSearch not Successfull!!");
}
void linear_search(int arr[], int n)
{
    printf("\nEnter the value you want to search: ");
    scanf("%d", &item);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == item)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("\nSearch Successfull!");
    }
    else
        printf("\nSearch not Successfull");
}
int main(void)
{
    while (1)
    {
        printf("\n\n1. Enter size of the array");
        printf("\n2. Change size of the array");
        printf("\n3. Enter Elements in the array");
        printf("\n4. Display the Contents of the array");
        printf("\n5. Search an element using linear search");
        printf("\n6. Search an element using binary search");
        printf("\n7. Sort the array");
        printf("\n8. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            scanf("%d", &size);
            arr = (int *)malloc(size * (sizeof(int)));
            break;
        case 2:
            scanf("%d", &size);
            arr = realloc(arr, size * sizeof(int));
            break;
        case 3:
            for (int i = 0; i < size; i++)
            {
                scanf("%d", &arr[i]);
            }
            break;
        case 4:
            for (int i = 0; i < size; i++)
            {
                printf("%d  ", arr[i]);
            }
            break;
        case 5:
            linear_search(arr, size);
            break;
        case 6:
            sort(arr, size);
            binary_search(arr, size);
            break;
        case 7:
            sort(arr, size);
            break;
        case 8:
            exit(0);
        default:
            break;
        }
    }

    return 0;
}
// END OF LINE