#include <stdio.h>
int main (void){
int arr[100],n,item,flag=0,pos;
printf("Enter the size of array: ");
scanf("%d",&n);
printf("Enter the elements in the array: ");
for (int i = 0; i < n; i++)
{
scanf("%d",&arr[i]);
}
printf("\nEnter the item you wanna search: ");
scanf("%d",&item);
for (int i = 0; i < n; i++)
{
    if(item==arr[i]){
    flag=1;
    pos=i;
    }
}
if(flag==1)
printf("\nSearch Successfull!!\nItem in position no. %d ",pos+1);
else
printf("\nSearch not Successfull!!");

return 0;
}