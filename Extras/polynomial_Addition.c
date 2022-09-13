#include <stdio.h>
int main (void){
    int arr1[100],arr2[100];
    int m,n;
    printf("Enter the size of 1st array: ");
    scanf("%d",&m);
    printf("Enter the size of 2nd array: ");
    scanf("%d",&n);
    printf("Enter the elements in the 1st array: ");
    for (int i = 0; i < m; i++)
        scanf("%d",&arr1[i]);
    printf("Enter the elements in the 2nd array: ");
    for (int i = 0; i < n; i++)
        scanf("%d",&arr2[i]);
    int sum[100];
    if(m>n){
        for (int i = 0; i < m; i++)
        sum[i]=arr1[i];
        }
    else{
        for (int i = 0; i < n; i++)
        sum[i]=arr2[i];
    }
    if(m>n){
        for (int i = 0; i < n; i++)
            sum[i]+=arr2[i];

    printf("The sum of each elements: ");
    for (int i = 0; i < m; i++)
        printf("%d ",sum[i]);
        }

    else{
        for (int i = 0; i < m; i++)
            sum[i]+=arr1[i];
    
    printf("The sum of each elements: ");
    for (int i = 0; i < n; i++)
        printf("%d ",sum[i]);
    }
    printf("\n");
    printf("The polynomial: ");
    int size=sizeof(sum)/sizeof(sum[0]);
    for (int i = m-1; i >=0; i--)
    {
        printf("+(%dx^%d) ",sum[i],i);
    }
    
return 0;
}