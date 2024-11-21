// problem on string

#include<stdio.h>

int Count(char *ptr)
{
  int iCount = 0;
 while (*ptr != '\0')
  {
    if(*ptr == 'a')
    {    
    iCount++;
    }
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

  
  iRet = Count(Arr); 
  printf("Count of a :%d\n",iRet);
 
  return 0;
}