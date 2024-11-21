#include<stdio.h>

int NumToDeci( int iValue)
{
    int iCnt = 0;
    if(iValue < 0)
    {
        iValue = -iValue;
    }

    int iDigit = 0;
    while(iValue != 0)
    {
        iCnt = iCnt + 1;
        iValue = iValue / 10;
    }
    printf("\n");
    return iCnt;
}


int main()
{
    int iNo = 0 , iRet = 0;

    printf("Enter a number :");
    scanf("%d",&iNo);

    iRet = NumToDeci(iNo);

    printf("%d",iRet);

    return 0;
}