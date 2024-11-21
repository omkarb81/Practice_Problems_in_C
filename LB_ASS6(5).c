// 5. Write a program which accept number from user and display its table in reverse
// order.
// Input : 2
// Output : 20 18 16 14 12 10 8 6 4 2
// Input : 5
// Output : 50 45 40 35 30 25 20 15 10 5
// Input : -5
// Output : 50 45 40 35 30 25 20 15 10 5

#include<stdio.h>

void Table(int iNo)
{
  int iRet = 1;
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  for(int i = 10 ; i>= 1 ; i--)
  {
    iRet = iNo * i;
    printf("%d\t",iRet);
  }
}

int main()
{
int iValue = 0 , iRet = 0;
printf("Enter number");
scanf("%d",&iValue);

Table(iValue);

return 0;
}