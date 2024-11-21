#include<stdio.h>

int SumDigits( int iValue)
{
    int iDigit = 0 , iSum = 0;
    if(iValue < 0)
    {
        iValue = -iValue;
    }
    while(iValue > 0)
    {
      iDigit = iValue % 10;
      iSum = iSum + iDigit;
      iValue = iValue / 10;

    }
    return iSum;
}


int main()
{
    int iNo = 0 , iRet = 0;

    printf("Enter a number :");
    scanf("%d",&iNo);

    iRet = SumDigits(iNo);

    printf("Addtion is :%d",iRet);

    return 0;
}