#include<stdio.h>

int main() {
    int number[10] = {1, 2, 2, 4, 5, 6,8,9, 1};
    int i, j;
    
    printf("Please enter Duplicate numbers:\n");
    for(i = 0; i < 10; i++) {
        int count = 0;
        for(j = i + 1; j < 10; j++) {
            if(number[i] == number[j]) 
            {
                count = 1;
                break;
            }
        }

        // Check if already printed
        int alreadyPrinted = 0;
        for(j = 0; j < i; j++) {
            if(number[i] == number[j]) {
                alreadyPrinted = 1;
                break;
            }
        }

        if(count == 1 && alreadyPrinted == 0) {
            printf("%d ", number[i]);
        }
    }

    return 0;
}
