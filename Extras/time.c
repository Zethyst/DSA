#include <stdio.h>
int main (void){
int hr,min,n;
char word[][100]={"One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen","Twenty","Twenty One","Twenty Two","Twenty Three","Twenty Four","Twenty Five","Twenty Six","Twenty Seven","Twenty Eight","Twenty Nine"};
do{
    printf("Enter Hours: ");
    scanf("%d",&hr);
    printf("Enter Mins: ");
    scanf("%d",&min);
    if(hr>12 || min>60)
    printf("Invalid Input!\nTime like this doesn't exit on the clock!!\n");
    else{
    if(min==0)
    printf("%s O'clock",word[hr-1]);
    else{
    if (min==30)
    printf("Half Past %s ",word[hr-1]);
    else if (min<30){
        if(min==15)
        printf("Quarter Past %s ",word[hr-1]);
        else
        printf("%s minutes Past %s ",word[min-1],word[hr-1]);
    }
    else{
    if(min == 45)
    printf("Quarter to %s",word[hr]);
    else
    printf("%s minutes to %s ",word[60-min-1],word[hr]);
    }
    }
    }
    printf("\nPress 1 to Continue or Press 0 to exit:\n");
    scanf("%d",&n);
}
while(n>0);
return 0;
}