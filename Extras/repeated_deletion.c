#include <stdio.h>
int main (void){
int arr[100],n;
printf("Enter the size of array: ");
scanf("%d",&n);
printf("Enter the elements in the array: ");
for (int i = 0; i < n; i++)
{
scanf("%d",&arr[i]);
}
printf("\nElements in the array are: \n");
for (int i = 0; i < n; i++)
{
    printf("%d  ",arr[i]);
}
//deletion (if next element repeats the assign 0 to next element)
for (int i = 0; i < n; i++)
{
    for (int j = i+1; j < n; j++)
    {
        if(arr[i]==arr[j])
        arr[j]=0;
    }
}
//print the array if element is not equals to 0
printf("\nThe New Array: \n");
for (int i = 0; i < n; i++)
{
    if(arr[i]!=0){
        printf("%d  ",arr[i]);
    }
}
return 0;
}