#include <stdio.h>
struct employee {
    char name[50];
    int id;
    float salary;
};
int main() {
    struct employee e[5], temp;
    int i, j, n;
    printf("Enter number of employees (max 5): ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("\nEnter details of Employee %d\n", i + 1);
        printf("Name: ");
        scanf("%s", e[i].name);
        printf("ID: ");
        scanf("%d", &e[i].id);
        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (e[i].salary > e[j].salary) {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }
    printf("\n--- Employees Sorted by Salary (Ascending) ---\n");
    for (i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Name   : %s\n", e[i].name);
        printf("ID     : %d\n", e[i].id);
        printf("Salary : %.2f\n", e[i].salary);
    }
    return 0;
}













