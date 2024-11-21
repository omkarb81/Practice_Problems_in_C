#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
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
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0 ;
    bool bRet = false;
    printf("Enter a numbers:");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);
    if(bRet == true)
    {
        printf("Number %d is perfect number",iValue);
    }
    else
    {
        printf("Number %d is not perfect number",iValue);
    }
    return 0;
}