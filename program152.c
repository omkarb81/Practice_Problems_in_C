// problem on string

#include<stdio.h>

int strlenX(char *ptr)
{
  int iCount = 0;
 while (*ptr != '\0')
  {
    iCount++;
    ptr++;
  }
  return iCount;
}

int main()
{
  char Arr[40];
  char *ptr = Arr;
  int iRet = 0;

  printf("Enter string:\n");
  scanf("%[^\n']s",Arr); 

  
  iRet = strlenX(Arr); 
  printf("Length of string :%d\n",iRet);
 
  return 0;
}