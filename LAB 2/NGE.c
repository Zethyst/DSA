#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,nge=-1;

    printf("Enter no of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr;
    ptr = (int*)malloc(n * sizeof(int));
     if(ptr==NULL)
    {
        printf("\nMemory not available!");
        exit(1);
    }

    for(int i = 0; i < n; i++)
    {
        printf("Enter element %d : ", (i+1));
        scanf("%d", &arr[i]);
    } 
    printf("Element\tNGE\n");
    for(int i=0;i<n;i++)
    {
        nge=-1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                nge=arr[j];
                break;
            }
        }
        printf("%d \t %d\n",arr[i],nge);
    }
    return 0;
}