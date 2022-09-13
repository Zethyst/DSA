#include <stdio.h>
#include <stdlib.h>
struct student{
    char name[100];
    char gender;
    int eng_marks,math_marks,phy_marks,chem_marks,comp_marks;
    int roll;
};
int main (void)
{
  int n,i;
  float total[100];
  printf("Enter number of students: ");
  scanf("%d",&n);
    struct student stu[n];
  for ( i = 0; i < n; i++)
  { 
    printf("\nEnter the student %d name : ",i+1);
    scanf("%s",&stu[i].name);
    fflush(stdin);
    printf("\nEnter the student %d gender : ",i+1);
    scanf("%c",&stu[i].gender);
    fflush(stdin);
    printf("\nEnter the student %d roll no. : ",i+1);
    scanf("%d",&stu[i].roll);
    fflush(stdin);
    printf("\nEnter the student %d marks in 5 subjects: ",i+1);
    printf("\nEnglish: ");
    scanf("%d",&stu[i].eng_marks);
    printf("\nMaths: ");
    scanf("%d",&stu[i].math_marks);
    printf("\nPhysics: ");
    scanf("%d",&stu[i].phy_marks);
    printf("\nChemistry: ");
    scanf("%d",&stu[i].chem_marks);
    printf("\nComputer: ");
    scanf("%d",&stu[i].comp_marks);

    total[i]+=stu[i].eng_marks+stu[i].math_marks+stu[i].phy_marks+stu[i].chem_marks+stu[i].comp_marks;
  }
  printf("\n");
for ( i = 0; i < n; i++)
{
    printf("\n\nStudent %d details: \n",i+1);
    printf("\nName: %s\n",stu[i].name);
    printf("\nGender: %c\n",stu[i].gender);
    printf("\nRoll NO.: %d\n",stu[i].roll);
    printf("\nMarks:\n");
    printf("English\tMaths\tPhysics\tChemistry\tComputer\n");
    printf("%d\t%d\t %d\t  %d\t\t%d\n",stu[i].eng_marks,stu[i].math_marks,stu[i].phy_marks,stu[i].chem_marks,stu[i].comp_marks);
    printf("\nTotal: %.2f\n",total[i]);
}
  printf("\n\nFailed Students:\n");
for ( i = 0; i < n; i++)
{
  if(stu[i].eng_marks<40)
  {
  printf("%s failed in English\n",stu[i].name);
  printf("Marks: %d\n",stu[i].eng_marks);
  }
  else if (stu[i].math_marks<40)
  {
  printf("%s failed in Maths\n",stu[i].name);
  printf("Marks: %d\n",stu[i].math_marks);
  }
  else if (stu[i].phy_marks<40)
  {
  printf("%s failed in Physics\n",stu[i].name);
  printf("Marks: %d\n",stu[i].phy_marks);
  }
  else if(stu[i].chem_marks<40)
  {
  printf("%s failed in Chemistry\n",stu[i].name);
  printf("Marks: %d\n",stu[i].chem_marks);
  }
  else if (stu[i].comp_marks<40)
  {
  printf("%s failed in Computer\n",stu[i].name);
  printf("Marks: %d\n",stu[i].comp_marks);
  }
}
return 0;
}