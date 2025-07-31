#include <stdio.h>

int main() {
    int matrix[4][4];

    printf("Please enter the matrix 4*4 ");
    for (int i = 0; i < 4; i++) 
    {
    for (int j = 0; j < 4; j++) 
     {
      scanf("%d", &matrix[i][j]);
     }
     printf("\n");
     }

    for (int i = 0; i < 4; i++) 
    {
    for (int j = 0; j < 4; j++) 
    {
    printf("\t%d", matrix[i][j]);  
    }
     printf("\n");
    }

    return 0;
}
