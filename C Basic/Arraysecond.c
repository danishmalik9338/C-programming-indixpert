#include<stdio.h>

int main(){
    int num1[2]={5,10};
    int num2[2];
    for (int i=0; i < 2; i++){
        num2[i]=num1[i];
    }
    printf("num2 ofter Swapping for num1\n:");
    for(int i = 0; i < 2; i++){
        printf("%d",num2[i]);
    }
    return 0;
}