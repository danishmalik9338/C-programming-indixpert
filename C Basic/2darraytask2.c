#include<stdio.h>

int main()
{
    char name[3][20];
    char id[3][10];
    char address[3][20];
    char contact[3][10];
    char email[3][20];

    printf("Please enter details for 3 students:\n");

    for(int i = 0; i < 3; i++)
    {
        printf("\nPlease enter %d student name \n", i+1);
        printf("Enter student name: ");
        scanf(" %[^\n]", name[i]);
        printf("Enter student ID: ");
        scanf(" %[^\n]", id[i]);  
        printf("Enter student address: ");
        scanf(" %[^\n]", address[i]);
        printf("Enter student contact: ");
        scanf(" %[^\n]", contact[i]);
        printf("Enter student email: ");
        scanf(" %[^\n]", email[i]);
    }

        printf("\nStudent Record List\n");
        for(int i = 0; i < 3; i++)
    {
        printf("\nStudent name %s:\n", name[i]);
        printf("Name    : %s\n", name[i]);
        printf("ID      : %s\n", id[i]);
        printf("Address : %s\n", address[i]);
        printf("Contact : %s\n", contact[i]);
        printf("Email   : %s\n", email[i]);
        printf("\n");
    }

    return 0;
}

