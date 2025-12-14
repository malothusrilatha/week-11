#include <stdio.h>
struct employee {
    char name[50];
    int id;
    float salary;
};
int main() {
    struct employee e;
    struct employee *ptr;
    ptr = &e;
    printf("Enter Employee Details\n");
    printf("Name: ");
    scanf("%s", ptr->name);
    printf("ID: ");
    scanf("%d", &ptr->id);
    printf("Salary: ");
    scanf("%f", &ptr->salary);
    printf("\n--- Employee Details ---\n");
    printf("Name   : %s\n", ptr->name);
    printf("ID     : %d\n", ptr->id);
    printf("Salary : %.2f\n", ptr->salary);
    return 0;
}







