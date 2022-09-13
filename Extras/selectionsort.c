#include <stdio.h>
void sort();
int main (void){
int arr[100],n,item,flag=0,pos;
printf("Enter the size of array: ");
scanf("%d",&n);
printf("Enter the elements in the array: ");
for (int i = 0; i < n; i++)
{
scanf("%d",&arr[i]);
}
sort(arr,n);
printf("\nElements in the array are: ");
for (int i = 0; i < n; i++)
{
    printf("%d  ",arr[i]);
}

return 0;
}
void sort(int arr[],int n){
    int min;
    for (int i = 0; i < n; i++)
    {
        min=i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[min]>arr[j])
            min=j;
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}