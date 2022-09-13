#include <stdio.h>
#include <math.h>
void create();
void display();
void mean();

int main (void){
    create();
return 0;
}
void create(){
    int arr[100],n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("\nEnter %d elements in the array one by one: ",n);
    for (int i = 0; i < n; i++)
    {
    printf("\nElement %d =  ",i+1);
    scanf("%d",&arr[i]);
    }
    display(arr,n);
    mean(arr,n);
}
void display(int arr[100],int n ){
    printf("\nElements in the array are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ",arr[i]);
    }
    
}
void mean(int arr[100],int n){
    int sum=0;
    float mean=0.0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    mean=sum/n;
    printf("\nMean: ");
    printf("%.2f",mean);
    float arr2[100],sumsquare=0;
    float variance,root;
    for (int i = 0; i < n; i++)
    {
        arr2[i]=(arr[i]-mean);
    }
    
    for (int i = 0; i < n; i++)
    {
        arr2[i]=(arr2[i]*arr2[i]);
        sumsquare+=arr2[i];
    }
    variance=sumsquare/(n-1);
    root=sqrt(variance);
    printf("\nStandard Deviation => %.2f",root);
}