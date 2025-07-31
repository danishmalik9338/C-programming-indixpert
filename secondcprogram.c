#include<stdio.h>

int main()
{
    char name[2][3][20];     
    char id[2][3][10];
    char address[2][3][20];
    char contact[2][3][10];
    char email[2][3][20];

    for(int i = 0; i < 2; i++)
    {
    printf("\nEnter details for Grad %d and 3 students:\n", i+1);
    for(int j = 0; j < 3; j++)

    {
    printf("\nPlease enter Class %d : Student name %d\n", i+1, j+1);
    printf("Enter student name: ");
    scanf(" %[^\n]", name[i][j]);
    printf("Enter student ID: ");
    scanf(" %[^\n]", id[i][j]);  
    printf("Enter student address: ");
    scanf(" %[^\n]", address[i][j]);
    printf("Enter student contact: ");
    scanf(" %[^\n]", contact[i][j]);
    printf("Enter student email: ");
    scanf(" %[^\n]", email[i][j]);
        }
    }

    
    for(int i = 0; i < 2; i++)
    {
    printf("\nStudent Record List for Class %d\n", i+1);
    for(int j = 0; j < 3; j++)

    {
    printf("\nStudent %s:\n", name[i]);
    printf("name: %s\n", name[i][j]);
    printf("id: %s\n", id[i][j]);
    printf("address: %s\n", address[i][j]);
    printf("contact: %s\n", contact[i][j]);
    printf("email: %s\n", email[i][j]);

        }
    }

    return 0;
}