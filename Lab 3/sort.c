//Question No.2

#include <stdio.h>
void sort();
int main (void){
int arr[100],n;
printf("Enter the size of array: ");
scanf("%d",&n);
printf("Enter the elements in the array: ");
for (int i = 0; i < n; i++)
{
scanf("%d",&arr[i]);
}
sort(arr,n);
printf("\nElements after sorting: ");
for (int i = 0; i < n; i++)
{
    printf("%d  ",arr[i]);
}

return 0;
}
void sort(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}