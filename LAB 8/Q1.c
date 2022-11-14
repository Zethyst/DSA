// PROGRAMMED BY AKSHAT JAISWAL

#include <stdio.h>
int main(void)
{
    int size, val, flag = 0;
    printf("\nEnter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("\nEnter the values in the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\nEnter the value you want to search: ");
    scanf("%d", &val);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == val)
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

    return 0;
}
// END OF LINE