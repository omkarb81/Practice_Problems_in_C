#include<stdio.h>

int SumEvenDigit( int iValue)
{
    int iDigit = 0 , iSum = 0 , iRev = 0;
    if(iValue < 0)
    {
        iValue = -iValue;
    }
    while(iValue > 0)
    {
      iDigit = iValue % 10;
      iRev = (iRev * 10)+ iDigit;
      iValue = iValue / 10;

    }
    return iRev;
}


int main()
{
    int iNo = 0 , iRet = 0;

    printf("Enter a number :");
    scanf("%d",&iNo);

    iRet = SumEvenDigit(iNo);

    printf("%d",iRet);

    return 0;
}