// 1.Write a program which accept number from user and display below pattern.
// Input : 5
// Output : * * * * * # # # # #
// Input : 6
// Output : * * * * * * # # # # # # #
// Input : -5
// Output : * * * * * # # # # #
// Input : 2
// Output : * * # #

#include<stdio.h>

void Display(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }

   for(int i = 1 ; i <= 5 ; i++)
   {
    printf("*\t");
   }

   for(int i = 1 ; i <= 5 ; i++)
   {
    printf("#\t");
   }
}

int main()
{
    int iValue = 0;
    printf("Enter number:");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}