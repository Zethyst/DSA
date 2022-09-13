#include <stdio.h>
int main (void)
{
  int i,n,arr1[10],arr2[10],arr3[10];
  int arr[10];

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Input %d elements in the array 1: \n", n);
    for (i = 0; i < n; i++) {
        printf("arr1[%d]: ", i);
        scanf("%d", &arr1[i]);
    }
        printf("\nElements in the array are: ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
  return 0;
}