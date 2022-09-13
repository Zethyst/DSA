#include <stdio.h>
void insertion();
int main (void){
int arr[100],n;
printf("Enter the size of array: ");
scanf("%d",&n);
printf("Enter the elements in the array: ");
for (int i = 0; i < n; i++)
scanf("%d",&arr[i]);

printf("\nElements in the array are: ");
for (int i = 0; i < n; i++)
{
    printf("%d  ",arr[i]);
}

insertion(arr,n);

printf("\nElements in the array are: ");
for (int i = 0; i < n+1; i++)
{
    printf("%d  ",arr[i]);
}
return 0;
}
void insertion(int arr[],int n){
    int pos,item;
    printf("\nEnter the position you want to insert an element: ");
    scanf("%d",&pos);
    
    printf("\nEnter the item you want to insert: ");
    scanf("%d",&item);
    for (int i = n-1; i >=pos ; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=item;
    n++;
}