// 3. Write a program which accept string from user and return
// difference between frequency of small characters and frequency of
// capital characters.

// Input : “MarvellouS”

// Output : 6 (8-2)

#include<stdio.h>

int Differece(char *ptr)
{
  int iCapital = 0 , iSmall = 0;
  while(*ptr != '\0')
  {
    if(*ptr >= 'A' && *ptr <= 'Z')
    {
      iCapital++;
    }
    else if(*ptr >= 'a' && *ptr <= 'z')
    {
      iSmall++;
    }
    ptr++;
  }
  return (iSmall - iCapital);
}

int main()
{
  char Arr[40];
  int iRet = 0;
  printf("Enter the string\n");
  scanf("%[^'\n']s",Arr);

  iRet = Differece(Arr);


  printf("Result is:%d",iRet);



  return 0;
}