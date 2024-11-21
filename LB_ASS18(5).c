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
{
  int iEven = 1 , iOdd = 1;

  if(iNo < 0)
  {
    iNo = -iNo;
  }

  for(int iCnt = 1 ; iCnt <= iNo ; iCnt++)
  {
    int iAns = 0;
    if(iCnt%2 == 0)
    {
      iEven = iEven * iCnt;
    }
    else
    {
      iOdd = iOdd * iCnt;
    }
  }
 return (iEven - iOdd);
}

int main()
{
    int iValue = 0 , iRet = 0;
    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);
    printf("Factorial difference is %d",iRet);
    return 0;
}