#include <stdio.h>
struct employee {
    char name[50];
    int id;
    float salary;
};
int main() {
    struct employee e[3];
    int i;
    for (i = 0; i < 3; i++) {
        printf("\nEnter details of Employee %d\n", i + 1);
        printf("Name: ");
        scanf("%s", e[i].name);
        printf("ID: ");
        scanf("%d", &e[i].id);
        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }
    printf("\n--- Employee Details ---\n");
    for (i = 0; i < 3; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Name   : %s\n", e[i].name);
        printf("ID     : %d\n", e[i].id);
        printf("Salary : %.2f\n", e[i].salary);
    }
    return 0;
}




