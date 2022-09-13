#include <stdio.h>
int main (void)
{
  int arr[10];
    int i, n, temp=0;

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

    for ( i = 0; i < n/2; i++)
    {
      for (int j = n-1-i; j>=0; j--)
      {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        break;
      }
      
    }
    printf("\nAfter Reversing:\n ");
    for ( i = 0; i < n; i++)
    {
      printf("%d ",arr[i]);
    }
    
    
return 0;
}