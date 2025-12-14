#include <stdio.h>
struct student {
    char name[50];
    int roll;
    float marks;
};
int main() {
    struct student s;
    FILE *fp;
    fp = fopen("student.txt", "r");
    if (fp == NULL) {
        printf("File not found or cannot be opened\n");
        return 1;
    }
    printf("\n--- Student Details From File ---\n");
    fscanf(fp, "Name: %s\nRoll No: %d\nMarks: %f",
           s.name, &s.roll, &s.marks);
    printf("Name   : %s\n", s.name);
    printf("Roll   : %d\n", s.roll);
    printf("Marks  : %.2f\n", s.marks);
    fclose(fp);
    return 0;
}















