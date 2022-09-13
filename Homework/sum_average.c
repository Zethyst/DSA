#include <stdio.h>
void create();
void display();
void sum();

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
    sum(arr,n);
}
void display(int arr[100],int n ){
    printf("\nElements in the array are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ",arr[i]);
    }
}
void sum(int arr[100],int n ){
    int sum=0;
    float avg=0.0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    avg=sum/n;
    printf("\n\nThe Sum of the elements: %d",sum);
    printf("\nThe Average of the elements: %.2f",avg);
}