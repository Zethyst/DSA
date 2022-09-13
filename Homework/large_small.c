#include <stdio.h>
void create();
void display();
void largest();
void smallest();

int main (void){
    create();
return 0;
}
void create(){
    int arr[100],n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("\nEnter the %d element in the array one by one: ",n);
    for (int i = 0; i < n; i++)
    {
    printf("\nElement %d =  ",i+1);
    scanf("%d",&arr[i]);
    }
    display(arr,n);
    largest(arr,n);
    smallest(arr,n);
}
void display(int arr[100],int n ){
    printf("Elements in the array are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ",arr[i]);
    }
    
}
void largest(int arr[100],int n){
    int max=arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    printf("\nThe Largest Element: %d",max);
    
}
void smallest(int arr[100],int n){
    int min=arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<min)
        min=arr[i];
    }
    printf("\nThe Smallest Element: %d",min);
}