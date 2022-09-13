#include <stdio.h>
int main(void)
{
    int m, n;
    printf("Enter the size of 1st array: ");
    scanf("%d", &m);
    printf("Enter the size of 2nd array: ");
    scanf("%d", &n);
    int arr1[m], arr2[n];
    printf("Enter the elements in the 1st array: ");
    for (int i = 0; i < m; i++)
        scanf("%d", &arr1[i]);
    printf("Enter the elements in the 2nd array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr2[i]);
    printf("\nElements in the first array: ");
    for (int i = 0; i < m; i++)
    {
        printf("%d  ", arr1[i]);
    }
    printf("\nPolinomial Form: ");
    for (int i = m - 1; i >= 0; i--)
    {
        printf("%dx^%d\t", arr1[i], i);
    }

    printf("\n\nElements in the second array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr2[i]);
    }
    printf("\nPolinomial Form: ");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%dx^%d\t", arr2[i], i);
    }

    int product[100];
    for (int i = 0; i < m + n; i++)
        product[i] = 0;

    printf("\n\nProduct: ");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            product[i + j] += arr1[i] * arr2[j];
        }
    }
    for (int i = (m - 1) + (n - 1); i >= 0; i--)
    {
        if (product[i] != 0)
            printf("%dx^%d\t", product[i], i);
    }

    return 0;
}