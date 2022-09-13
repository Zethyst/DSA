//Question No. 3

#include <stdio.h>
void merge();
int main (void){
int arr1[100],arr2[100],m,n;
printf("Enter the size of the 1st array: ");
scanf("%d",&m);
printf("Enter the size of the 2nd array: ");
scanf("%d",&n);
printf("Enter the elements in the 1st array: ");
for (int i = 0; i < m; i++)
{
scanf("%d",&arr1[i]);
}
printf("Enter the elements in the 2nd array: ");
for (int i = 0; i < n; i++)
{
scanf("%d",&arr2[i]);
}
printf("\nElements in the 1st array are:\n");
for (int i = 0; i < m; i++)
{
    printf("%d  ",arr1[i]);
}
printf("\nElements in the 2nd array are:\n");
for (int i = 0; i < n; i++)
{
    printf("%d  ",arr2[i]);
}
sort(arr1,m);
sort(arr2,n);
merge(arr1,arr2,m,n);

return 0;
}
void merge(int arr1[] , int arr2[],int m,int n){
    int arr3[100];
    for (int i = 0; i < m; i++)
    {
        arr3[i]=arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr3[m+i]=arr2[i];
    }
    sort(arr3,(m+n));
    printf("\n\nTHE MERGED ARRAY: \n");
    for (int i = 0; i < m+n; i++)
    {
        printf("%d  ",arr3[i]);
    }
    
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