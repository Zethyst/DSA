// PROGRAMMED BY AKSHAT JAISWAL
#include <stdio.h>
void insertion(int arr[], int n)
{
  int i=1,j=0,key=0;
  while (i<n)
  {
    key=arr[i];
    j=i-1;
    while (j>=0 && key<arr[j])
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;
    i++;
  }
  
}
int main(void)
{
    int n;
    printf("\nEnter the size of the array: ");
    scanf("%d", &n);
    int A[n];
    printf("\nEnter the elements in the array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("A[%d] => ", i);
        scanf("%d", &A[i]);
    }
    printf("\nUnsorted => ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", A[i]);
    }
    insertion(A, n);
    printf("\nSorted => ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", A[i]);
    }

    return 0;
}
// END OF LINE