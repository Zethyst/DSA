#include <stdio.h>
void deletion();
int main (void){
int arr[100],n;
printf("Enter the size of array: ");
scanf("%d",&n);
printf("Enter the elements in the array: ");
for (int i = 0; i < n; i++)
{
scanf("%d",&arr[i]);
}
printf("\nElements in the array are: ");
for (int i = 0; i < n; i++)
{
    printf("%d  ",arr[i]);
}
deletion(arr,n);
printf("\nElements in the array are: ");
for (int i = 0; i < n-1; i++)
{
    printf("%d  ",arr[i]);
}
return 0;
}
void deletion(int arr[],int n){
    int pos;
    printf("\nEnter the postion you want to delete an element from: ");
    scanf("%d",&pos);
    
    for (int i = pos+1; i <= n-1; i++)
    {
        arr[i-1]=arr[i];
    }
    n--;
}