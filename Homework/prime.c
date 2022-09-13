#include <stdio.h>
int main (void){
int i,j,count=0,n1,n2,temp_num;

printf("Enter the range of numbers: \n");
printf("Lower Range: ");
scanf("%d",&n1);
printf("Upper Range: ");
scanf("%d",&n2);
for ( i = n1; i <= n2; i++)
{
    temp_num=i;
    for ( j = 1; j <= temp_num; j++)
    {
        if(temp_num%j==0)
        count++;
    }
    if(count==2)
    printf("%d ",temp_num);
    count=0;
}

return 0;
}