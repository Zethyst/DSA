#include <stdio.h>

int main (void){
    int n,arr[100],left,right;
printf("Enter the size of the array: ");
scanf("%d",&n);
printf("Enter the elements in the array one by one: \n");
for (int i = 0; i < n; i++)
{
printf("\narr[%d] => ",i);
scanf("%d",&arr[i]);
    
}
printf("Elements in the array are: \n");
for (int i = 0; i < n; i++)
{
    printf("%d  ",arr[i]);
}
left=0,right=n-1;
int temp;
while (left<=right)
{
    if(arr[left]%2!=0){
        if(arr[right]%2==0){
            temp=arr[left];
            arr[left]=arr[right];
            arr[right]=temp;
            left++;
            right--;
        }
        else
        right--;
    }
    else
    left++;
}
printf("\nElements after operation: \n");
for (int i = 0; i < n; i++)
{
    printf("%d  ",arr[i]);
}


return 0;
}