#include<stdio.h>
#include<stdbool.h>

int SumFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1 ; iCnt <=iNo/2 ; iCnt++)
    {
        if(iNo%iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    if(iSum == iNo)
    {
        return iSum;
    }
}

int main()
{
    int iValue = 0 , iRet = 0;
    printf("Enter a numbers:");
    scanf("%d",&iValue);

    iRet = SumFact(iValue);
    printf("Sum of numbers :%d",iRet);
    return 0;
}