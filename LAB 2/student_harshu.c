#include <stdio.h>
struct student {
    int roll;
    char Name[50];
    float CGPA;
    char section[1];
};

int main() {
    int n;
    printf("Enter number of students:\n");
    scanf("%d",&n);
    // storing information
    struct student s[n];
    for (int i = 0; i < n; i++) {
        
        printf("\nRoll number: ");
        scanf("%d",&s[i].roll);
        printf("Enter name: ");
        scanf("%s",&s[i].Name);
        printf("Enter CGPA: ");
        scanf("%f", &s[i].CGPA);
        printf("Enter section: ");
        scanf("%s",&s[i].section);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (int i = 0; i <n;i++) {
        printf("\nRoll number: %d\n",s[i].roll);
        printf("First name: \n");
        puts(s[i].Name);
        printf("CGPA: %.1f\n", s[i].CGPA);
        printf("Section: \n");
        puts(s[i].section);
        
        
    }
    return 0;
}