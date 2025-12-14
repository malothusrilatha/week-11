#include <stdio.h>
struct address {
    int hno;
    char city[30];
    int pin;
};
struct student {
    char name[50];
    int rollno;
    int marks[6];
    struct address addr;
};
int main() {
    struct student s;
    int i, total = 0;
    printf("Enter Student Name: ");
    scanf("%s", s.name);
    printf("Enter Roll Number: ");
    scanf("%d", &s.rollno);
    printf("Enter marks of 6 subjects:\n");
    for (i = 0; i < 6; i++) {
        scanf("%d", &s.marks[i]);
        total += s.marks[i];
    }
    printf("Enter House No: ");
    scanf("%d", &s.addr.hno);
    printf("Enter City: ");
    scanf("%s", s.addr.city);
    printf("Enter PIN Code: ");
    scanf("%d", &s.addr.pin);
    printf("\n--- Student Details ---\n");
    printf("Name      : %s\n", s.name);
    printf("Roll No   : %d\n", s.rollno);
    printf("Marks     : ");
    for (i = 0; i < 6; i++) {
        printf("%d ", s.marks[i]);
    }
    printf("\nAddress   : H.No %d, %s - %d\n",
           s.addr.hno, s.addr.city, s.addr.pin);
    return 0;
}


