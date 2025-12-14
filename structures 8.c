#include <stdio.h>
struct employee {
    char name[50];
    int id;
    float salary;
};
struct employee read() {
    struct employee e;
    printf("Enter Employee Details\n");
    printf("Name: ");
    scanf("%s", e.name);
    printf("ID: ");
    scanf("%d", &e.id);
    printf("Salary: ");
    scanf("%f", &e.salary);
    return e;
}
void display(struct employee e) {
    printf("\n--- Employee Details ---\n");
    printf("Name   : %s\n", e.name);
    printf("ID     : %d\n", e.id);
    printf("Salary : %.2f\n", e.salary);
}
int main() {
    struct employee emp;
    emp = read();
    display(emp);
    return 0;
}









