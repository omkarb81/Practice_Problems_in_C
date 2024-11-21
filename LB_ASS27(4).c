// 4. Write a program which accept string from user and check whether
// it contains vowels in it or not.

// Input : “marvellous”

// Output : TRUE

// Input : “Demo”

// Output : TRUE

// Input : “xyz”

// Output : FALSE

#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{
  int iCapital = 0;
  int iFlag = 0;
  while(*str != '\0')
  {
    if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || 
    *str == 'u' || *str == 'A'|| *str == 'E'|| *str == 'I'|| *str == 'O'|| *str == 'U')
    {
      iFlag = 1;
      break;
    }
    str++;
  }
  return iFlag;
}

int main()
{
  char Arr[40];
  bool bRet = false;
  printf("Enter the string\n");
  scanf("%[^'\n']s",Arr);

  bRet = ChkVowel(Arr);
  if(bRet == true)
  {
    printf("Contains Vowel");
  }
  else
  {
    printf("There is no Vowel");
  };



  return 0;
}