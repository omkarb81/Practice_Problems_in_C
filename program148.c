// problem on string

#include<stdio.h>

int main()
{
  char Arr[40];

  printf("Enter your name:\n");
  scanf("%[^\n']s",Arr); //Accepts till 1st space only

  printf("Your name is : %s\n",Arr);
  return 0;
}