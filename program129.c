#include<stdio.h>

void Display(int iRow )
{
   char ch = '\0';
   int iCnt = 0;
   for(iCnt = 1 , ch = 'a'; iCnt <= iRow ; iCnt++, ch++ )
   {
     printf("%c\t%d\t", ch, iCnt);
   }
   printf("\n");    
}

int main()
{
    int iValue1 = 0 ;

    printf("Enter the number\n");
    scanf("%d",&iValue1);

    Display(iValue1);

    return 0;
}