#include<stdio.h>

void Display(int iRow )
{
   char ch = '\0';
   int iCnt = 0;
   for(iCnt = 1 , ch = 'A'; iCnt <= iRow ; iCnt++, ch++ )
   {
     printf("%c\t",ch);
   }
   printf("\n");    
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue1);

    Display(iValue1);

    return 0;
}