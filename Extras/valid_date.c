#include <stdio.h>
int main (void){
int i,d,m,y,f=1,s=0;
int no_of_days_in_month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
printf("Enter date of birth in dd mm yyyy format:\n");
scanf("%d%d%d",&d,&m,&y);
if(m>12)
f=0;
if(m==2)
{
    if(y%4==0)
    {
    if(d>29)
    f=0;
    }
    else
    {
    if(d>28)
    f=0;
    }
}
if(m==1 || m==3 || m==5 ||m==7 || m==8 || m==10 || m==12)
{
    if(d>31)
    f=0;
}
else
{
    if(d>30)
    f=0;
}
if(f==1)
{
    printf("\nDate is Valid!\n");
    i=1;
    while (i<m)
    {
        s=s+no_of_days_in_month[i];
        i++;
    }
    s=s+d;
    printf("\nDay no. of the year => %d",s);
}
else
printf("\nInvalid Date!\n");
return 0;
}