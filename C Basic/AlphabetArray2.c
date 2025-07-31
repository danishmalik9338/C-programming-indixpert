#include<stdio.h>

int main()
{
    char name[6];
    int Vowels = 0,i;
    printf("please enter yuor name:");
    scanf("%s", &name);
    for(int i = 0; i < 6; i++)
    {
        printf(" %c ",name[i]);
        if(name[i] == 'a'|| name[i] == 'e'||name[i] == 'i'|| name[i] == 'o'|| name[i] == 'u')
        {
            Vowels = 1;
        }
        
    }
    if(Vowels==1)
    {
        printf("\nvowels is found");
    }
    else
    {
        printf("\nwovels is not found");
    }
    
       
    return 0;
} 