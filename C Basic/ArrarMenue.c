#include <stdio.h>

int main() {
    char hindi[10];
    char english[10];
    char maths[10];
    char science[10];
    int choice;

    printf("\nMenu\n");
    printf("1. Add Subjects\n");
    printf("2. Exit\n");
    printf("Please enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("\nPlease enter subjects:\n");

        printf("Enter Hindi: ");
        scanf("%s", hindi);

        printf("Enter English: ");
        scanf("%s", english);

        printf("Enter Maths: ");
        scanf("%s", maths);

        printf("Enter Science: ");
        scanf("%s", science);

        printf("\nYou entered:\n");
        printf("Hindi: %s\n", hindi);
        printf("English: %s\n", english);
        printf("Maths: %s\n", maths);
        printf("Science: %s\n", science);
    }
    else if (choice == 2) {
        printf("Exit\n");
    }
    else {
        printf("Invalid choice. Please enter 1 or 2.\n");
    }

    return 0;
}
