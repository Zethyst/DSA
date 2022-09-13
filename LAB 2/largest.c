#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Enter no of elements: ");
    scanf("%d", &n);

    int *ptr;
    ptr = (int*)malloc(n * sizeof(int));

    for(int i = 0; i < n; i++)
    {
        printf("Enter element %d : ", (i+1));
        scanf("%d", (ptr+i));
    }    
        
    int max = *ptr, count = 0;    
        
    for (int i = 0; i < n; i++)
    {     
       if(*(ptr+i) > max)
       {    
           max = *(ptr+i);
           count = 0;    
       }
       if(*(ptr+i) == max)
       {
        count++;
       }
    }
    free(ptr);
    printf("Largest element is %d \n", max);    
    printf("Number of times it occured: %d \n", count);
    return 0;    
}