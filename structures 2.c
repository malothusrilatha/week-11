#include <stdio.h>
#include <stdlib.h>
struct book {
    char name[50];
    char author[50];
    int pages;
    float price;
};
int main() {
    struct book *b;
    int i, n;
    printf("Enter number of books: ");
    scanf("%d", &n);
    b = (struct book *)malloc(n * sizeof(struct book));
    if (b == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    for (i = 0; i < n; i++) {
        printf("\nEnter details of Book %d\n", i + 1);
        printf("Book Name: ");
        scanf("%s", b[i].name);
        printf("Author Name: ");
        scanf("%s", b[i].author);
        printf("Number of Pages: ");
        scanf("%d", &b[i].pages);
        printf("Price: ");
        scanf("%f", &b[i].price);
    }
    printf("\n--- Book Details ---\n");
    for (i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);
        printf("Name   : %s\n", b[i].name);
        printf("Author : %s\n", b[i].author);
        printf("Pages  : %d\n", b[i].pages);
        printf("Price  : %.2f\n", b[i].price);
    }
    free(b);
    return 0;
}



