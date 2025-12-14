#include <stdio.h>
struct complex {
    float real;
    float imag;
};
struct complex add(struct complex a, struct complex b) {
    struct complex c;
    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;
    return c;
}
struct complex sub(struct complex a, struct complex b) {
    struct complex c;
    c.real = a.real - b.real;
    c.imag = a.imag - b.imag;
    return c;
}
int main() {
    struct complex c1, c2, sum, diff;
    printf("Enter first complex number:\n");
    printf("Real part: ");
    scanf("%f", &c1.real);
    printf("Imaginary part: ");
    scanf("%f", &c1.imag);
    printf("\nEnter second complex number:\n");
    printf("Real part: ");
    scanf("%f", &c2.real);
    printf("Imaginary part: ");
    scanf("%f", &c2.imag);
    sum = add(c1, c2);
    diff = sub(c1, c2);
    printf("\nAddition = %.2f + %.2fi\n", sum.real, sum.imag);
    printf("Subtraction = %.2f + %.2fi\n", diff.real, diff.imag);
    return 0;
}





