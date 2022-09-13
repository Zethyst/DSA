#include <stdio.h>
#include <stdlib.h>
struct student
{
  char name[100];
  char gender[10];
  int eng_marks, math_marks, phy_marks, chem_marks, comp_marks;
  int roll;
};
int main(void)
{
  int n, i;
  float total[100];
  printf("Enter number of students: ");
  scanf("%d", &n);
  struct student stu[n];
  for (i = 0; i < n; i++)
  {
    printf("\nEnter the student %d name : ", i + 1);
    scanf("%s", &stu[i].name);
    fflush(stdin);
    printf("\nEnter the student %d gender : ", i + 1);
    scanf("%s", &stu[i].gender);
    fflush(stdin);
    printf("\nEnter the student %d roll no. : ", i + 1);
    scanf("%d", &stu[i].roll);
    fflush(stdin);
    printf("\nEnter the student %d marks in 5 subjects: ", i + 1);
    printf("\nEnglish: ");
    scanf("%d", &stu[i].eng_marks);
    printf("\nMaths: ");
    scanf("%d", &stu[i].math_marks);
    printf("\nPhysics: ");
    scanf("%d", &stu[i].phy_marks);
    printf("\nChemistry: ");
    scanf("%d", &stu[i].chem_marks);
    printf("\nComputer: ");
    scanf("%d", &stu[i].comp_marks);
    total[i] += stu[i].eng_marks + stu[i].math_marks + stu[i].phy_marks + stu[i].chem_marks 
    + stu[i].comp_marks;
  }
  printf("\n");
  for (i = 0; i < n; i++){
    printf("\n\nStudent %d details: \n", i + 1);
    printf("\nName: %s\n", stu[i].name);
    printf("\nGender: %s\n", stu[i].gender);
    printf("\nRoll NO.: %d\n", stu[i].roll);
    printf("\n________Marks________\n");
    printf("English\tMaths\tPhysics\tChemistry\tComputer\n");
    printf("%d\t%d\t %d\t  %d\t\t%d\n", stu[i].eng_marks, stu[i].math_marks, stu[i].phy_marks,
     stu[i].chem_marks, stu[i].comp_marks);
    printf("\nTotal Marks: %.2f\n", total[i]);
  }
  return 0;
}