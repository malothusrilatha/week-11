#include <stdio.h>
struct student {
    char name[50];
    int roll;
    float marks;
};
int main() {
    struct student s;
    FILE *fp;
    fp = fopen("student.txt", "w");
    if (fp == NULL) {
        printf("File cannot be opened\n");
        return 1;
    }
    printf("Enter Student Details\n");
    printf("Name: ");
    scanf("%s", s.name);
    printf("Roll No: ");
    scanf("%d", &s.roll);
    printf("Marks: ");
    scanf("%f", &s.marks);
    fprintf(fp, "Name: %s\nRoll No: %d\nMarks: %.2f\n",
            s.name, s.roll, s.marks);
    fclose(fp);
    printf("\nData written to file successfully.\n");
    return 0;
}














