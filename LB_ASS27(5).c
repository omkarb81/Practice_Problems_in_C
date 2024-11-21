// 3. Write a program which accept string from user and display it inn
// reverse order.

// Input : “MarvellouS”

// Output : “SuollevraM”

#include<stdio.h>
#include<stdbool.h>


void Reverse(char *str)
{
  char *start = str;
  char *end = str;
  char temp ;

  while(*end != '\0')
  {
    end++;
  }
  end--;

  while(start < end)
  {
    temp = *start;
    *start = *end;
    *end = temp;

    start++;
    end--;
  }
  printf("%s",str);
}

int main()
{
  char Arr[40];
  int iLength = 0;
  printf("Enter the string\n");
  scanf("%[^'\n']s",Arr);

  Reverse(Arr);

  return 0;
}