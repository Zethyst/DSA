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
printf("\nElements in the 1st array are: ");
for (int i = 0; i < m; i++)
{
    printf("%d  ",arr1[i]);
}
printf("\nElements in the 2nd array are: ");
for (int i = 0; i < n; i++)
{
    printf("%d  ",arr2[i]);
}
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
    printf("\nn\nTHE MERGED ARRAY: \n");
    for (int i = 0; i < m+n; i++)
    {
        printf("%d  ",arr3[i]);
    }
}