#include <stdio.h>
int main (void){
    int arr1[100],arr2[100],arr3[100],m,n;
    printf("Enter the size of the 1st array: ");
    scanf("%d",&m);
    printf("Enter the size of the 2nd array: ");
    scanf("%d",&n);
    printf("\nEnter elements in the 1st array: ");
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("\nEnter elements in the 2nd array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr2[i]);
    }
    printf("\nElements in the 1st array: ");
    for (int i = 0; i < m; i++)
    {
        printf("%d  ",arr1[i]);
    }
    printf("\nElements in the 2nd array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ",arr2[i]);
    }
    if(m>n)
    {
    for (int i = 0; i < m; i++)
    {
        arr3[i]=arr1[i];
    }
    }
    else
    {
     for (int i = 0; i < n; i++)
    {
        arr3[i]=arr2[i];
    } 
    }
    if(m>n)
    {
    for (int i = 0; i < n; i++)
    {
        arr3[i]=arr3[i]+arr2[i];
    }
    }
    else{
     for (int i = 0; i < m; i++)
    {
        arr3[i]=arr3[i]+arr1[i];
    }
    }   
    if(m>n)
    {
    printf("\nElements in the 3rd and merged array: ");
    for (int i = 0; i < m; i++)
    {
        printf("%d  ",arr3[i]);
    }
    }
    else
    {
    printf("\nElements in the 3rd and merged array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ",arr3[i]);
    }
    }
    

return 0;
}