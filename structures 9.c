#include <stdio.h>
struct student {
    char name[50];
    int roll;
    float marks;
};
void read(struct student s[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("\nEnter details of Student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll No: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
}
void display(struct student s[], int n) {
    int i;
    printf("\n--- Student Details ---\n");
    for (i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name  : %s\n", s[i].name);
        printf("Roll  : %d\n", s[i].roll);
        printf("Marks : %.2f\n", s[i].marks);
    }
}
int main() {
    struct student s[5];
    int n;
    printf("Enter number of students (max 5): ");
    scanf("%d", &n);
    read(s, n);
    display(s, n);
    return 0;
}










