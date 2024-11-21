// 5. Write a program which returns difference between Even factorial and odd factorial
// of given number.
// Input : 5
// Output : -7 (8 - 15)
// Input : -5
// Output : -7 (8 - 15)
// Input : 10
// Output : 2895 (3840 - 945)

#include<stdio.h>
int FactorialDiff(int iNo)
{ int iAns = 1;
  int iRet = 1 , iEvenOdd = 0 ;
  if(iNo < 0)
  {
    iNo = -iNo;
  }

  for(int i = 1 ; i<=iNo ; i++)
  {  
    if(i%2 != 0)
    {
      iAns = iAns * i;
    }
  }
  for(int i = 1 ; i<=iNo ; i++)
  {  
    if(i%2 == 0)
    {
      iRet = iRet * i;
    }
  }
   iEvenOdd = iRet - iAns;
   return iEvenOdd;
  
}
int main()
{
  int iValue = 0,iRet = 0;
  printf("Enter number");
  scanf("%d",&iValue);
  iRet = FactorialDiff(iValue);
  printf("Even Factorial of number is %d",iRet);
  return 0;
}