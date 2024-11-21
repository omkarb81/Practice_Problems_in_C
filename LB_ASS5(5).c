// 5. Write a program which accept N and print first 5 multiples of N.
// Input : 4
// Output : 4 8 12 16 20
#include<stdio.h>

void MultipleDisplay(int iNo)
{  int iAns = 0;
   for(int i = 1 ; i<=5;i++)
   {
    iAns = iNo*i;
    printf("%d\t",iAns);
   }
}

int main()
{
int iValue = 0;
printf("Enter number");
scanf("%d",&iValue);

MultipleDisplay(iValue);

return 0;
}