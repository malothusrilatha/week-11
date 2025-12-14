#include <stdio.h>
struct date {
    int day;
    int month;
    int year;
};
struct student {
    char name[50];
    int roll;
    struct date dob;
};
int main() {
    struct student s;
    printf("Enter Student Details\n");
    printf("Name: ");
    scanf("%s", s.name);
    printf("Roll No: ");
    scanf("%d", &s.roll);
    printf("Enter Date of Birth\n");
    printf("Day: ");
    scanf("%d", &s.dob.day);
    printf("Month: ");
    scanf("%d", &s.dob.month);
    printf("Year: ");
    scanf("%d", &s.dob.year);
    printf("\n--- Student Details ---\n");
    printf("Name : %s\n", s.name);
    printf("Roll : %d\n", s.roll);
    printf("DOB  : %02d-%02d-%04d\n",
           s.dob.day, s.dob.month, s.dob.year);
    return 0;
}











