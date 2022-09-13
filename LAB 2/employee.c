#include <stdio.h>
#include <stdlib.h>
struct employee{
    char name[100];
    char gender[100];
    char designation[100];
    char department[100];
    int basic_pay;
};
int main (void)
{
  int n,i;
  float hr[100],da[100];
  printf("Enter number of employees: ");
  scanf("%d",&n);
   int *ptr=(int*) calloc(n,sizeof(int));
    if(ptr==NULL)
    {
        printf("\nMemory not available!");
        exit(1);
    }
    struct employee emp[n];
  for ( i = 0; i < n; i++)
  {
    printf("Enter the employee %d name : ",i+1);
    scanf("%s",&emp[i].name);
    fflush(stdin);
    printf("Enter the employee %d gender : ",i+1);
    scanf("%s",&emp[i].gender);
    fflush(stdin);
    printf("Enter the employee %d designation : ",i+1);
    scanf("%s",&emp[i].designation);
    fflush(stdin);
    printf("Enter the employee %d department : ",i+1);
    scanf("%s",&emp[i].department);
    fflush(stdin);
    printf("Enter the employee %d salary : ",i+1);
    scanf("%d",&emp[i].basic_pay);
    fflush(stdin);
    hr[i]=(emp[i].basic_pay)*0.25;
    da[i]=emp[i].basic_pay*0.75;
  }
  printf("\n");
for ( i = 0; i < n; i++)
{
    printf("\n\nEmployee %d details: \n",i+1);
    printf("\nName: %s\n",emp[i].name);
    printf("\nGender: %s\n",emp[i].gender);
    printf("\nDesignation: %s\n",emp[i].designation);
    printf("\nDepartment: %s\n",emp[i].department);
    printf("\nSalary: %d\n",emp[i].basic_pay);
    printf("\nhr: %f\n",hr[i]);
    printf("\nGross Salary: %.2f\n",(emp[i].basic_pay+hr[i]+da[i]));
}
return 0;
}
