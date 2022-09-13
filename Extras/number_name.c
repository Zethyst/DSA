#include <stdio.h>
int main (void){
    int i,n,num=0;
    int a[4];
    char word[][100]={"One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen","Twenty","Thirty","Fourty","Fifty","Sixty","Seventy","Eighty","Ninety"};
    printf("Enter a natural number less than 10000: \n");
    scanf("%d",&num);
    n=num;
    i=4;
    while(n>0){
        a[--i]=n%10;
        n=n/10;
    }
    // while(i>0){
    //     a[--i]=0;
    // }
        if(a[0]!=0)
        printf("%s Thousand ",word[a[0]-1]);
        if(a[1]!=0)
        printf("%s Hundred ",word[a[1]-1]);
        if(a[2]!=0){
            if(a[2]>=0)
            printf("%s ",word[a[2]+17]);
            if(a[3]!=0)
            printf("%s ",word[a[3]-1]);
        }
        if(a[2]==1)
        printf("%s ",word[a[3]+9]);
        if(a[2]==0 && a[3]!=0)
        printf("%s ",word[a[3]-1]);
return 0;
}