// 4. Write a program to find odd factorial of given number.
// Input : 5
// Output : 15 (5 * 3 * 1)
// Input : -5
// Output : 15 (5 * 3 * 1)
// Input : 10
// Output : 945 (9 * 7 * 5 * 3 * 1)

#include<stdio.h>
int EvenFactorial(int iNo)
{ int iAns = 1;
  for(int i = 1 ; i<=iNo ; i++)
  {
    if(i%2 != 0)
    {
      iAns = iAns * i;
    }
  }
  return iAns;
}
int main()
{
  int iValue = 0,iRet = 0;
  printf("Enter number");
  scanf("%d",&iValue);
  iRet = EvenFactorial(iValue);
  printf("Even Factorial of number is %d",iRet);
  return 0;
}