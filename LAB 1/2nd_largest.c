#include <stdio.h>

int main(void) 
{
    int arr[10];
    int i, n;
    int first = arr[0];
    int second = arr[0];

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
        printf("\nElements in the array are: ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    

    for (i = 0; i < n; i++) 
    {
        if (first < arr[i]) {
            second = first;
            first = arr[i];
        } else
        if (second < arr[i] && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == first)
        printf("\nThere is no second largest element\n");
    else
        printf("\nThe Second largest element in the array is: %d", second);

    return 0;
}