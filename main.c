/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define NUM_EMPLOYEES 5

struct Employee
{
    char name[50];
    int employID;
    int experience;
    float salary;
};
int main()
{
    struct Employee employees[NUM_EMPLOYEES];
    for(int i = 0; i < NUM_EMPLOYEES; i++)
    {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Employ ID: ");
        scanf("%d", &employees[i].employID);
        printf("Experience (in years): ");
        scanf("%d", &employees[i].experience);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("\n");
    }

    // Print the details of each employee
    printf("Employee Details:\n");
    for(int i = 0; i < NUM_EMPLOYEES; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("Employ ID: %d\n", employees[i].employID);
        printf("Experience: %d years\n", employees[i].experience);
        printf("Salary: %.2f\n", employees[i].salary);
        printf("\n");
    }

    return 0;
}
    
