#include <stdio.h>
void create();
void fibo();

int main (void){
    create();
return 0;
}
void create(){
    int arr[10];
    printf("\nThe Fibonacci Series: ");
    printf("%d %d ",0,1);
    fibo(10-2);
}
void fibo(int n ){
    
    int n1=0,n2=1,n3;
    for(int i=2;i<n;i++)
    {
    n3=n1+n2;
    n1=n2;
    n2=n3;
    printf("%d ",n3);
    }
}


