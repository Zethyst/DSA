// PROGRAMMED BY AKSHAT JAISWAL

#include <stdio.h>
void sort();
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
    sort(arr, n);
    printf("\nElements in the array are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }

    printf("\n\nEnter the item you wanna search: ");
    scanf("%d", &item);
    int lb = 0, ub = n - 1;
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
    return 0;
}

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
// END OF LINE