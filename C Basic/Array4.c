#include<stdio.h>

int main() {
    int number[10] = {1, 2, 2, 4, 5, 6,8,9, 1};
    int i, j;
    
    printf("Please enter Duplicate numbers:\n");
    for(i = 0; i < 10; i++) {
        int alreadyPrinted = 0;
        for(int k = 0; k < i; k++){
          if(number[i] == number[k]){

         aleadyPrinted = 1;
         break;
          }
        }
        
        
        if(aleadyPrinted == 1)
        continue;
        for(y = i + 1; y < 10; y++)
        if(number[i] == number[y]){
            printf("%d duplicat element Verify\n", number[i]);
            break;
        }
    }
   
            
                

    return 0;
}


 