// PROGRAMMED BY AKSHAT JAISWAL
#include <stdio.h>
int main(void)
{
    int n;
    printf("\nEnter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the elements in the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
    int max = arr[i];
        for (int j = i; j < i+3; j++)
        {
            if (arr[j] > max)
            {
                max = arr[j];
            }
        }
            printf("\nMax Elements are => %d", max);
    }

    return 0;
}
// END OF LINE