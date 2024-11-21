//Accept one character from user and convert case of that character.
//Input:a  Output:A
//Input:D  Output:d
#include<stdio.h>
void DisplayConvert ( char CValue)
{
    if(CValue>='a' && CValue<='z' )
    {
      printf("%c" , CValue - ('a'-'A')); //lower to upper
    }
    else if(CValue>='A' && CValue<='Z') 
    {
      printf("%c" , CValue + ('a'-'A')); //upper to lower
    }
}
int main()
{
    char cValue = '\0';
    printf("Enter character\n");
    scanf("%c",&cValue);
    DisplayConvert(cValue );
    return 0;
}