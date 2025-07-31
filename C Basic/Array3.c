#include<stdio.h>

int main()
{
int num[10]={1,2,4,1,4,1,1,4,2,1};
int duplicat;
int newnum[10];
int flag = 0;
int count = 0;

for (int i = 0; i < 10; i++)
{
  duplicat = 0;
  for (int j = i + 1; j < 10; j++)
  {
    if (num[i] == num[j])
    {
      duplicat = 1;
    }
  }

  if (duplicat = 1)
  {
    flag = 0;
    for(int y = 0;y < 10; y++)
    {
      if (num[i] == newnum[y])
      {
        flag = 1;
      }
    }
    if (flag == 0)
    {
      newnum[count] = num[i];
      count++;
    }
  }
}
for (int i = 0; i < count; i++)
{
  printf("%d\n", newnum[i]);
}


return 0;
}   