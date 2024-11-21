#include<stdio.h>
#include<stdbool.h>

bool DivNumber(int iNo)
{
    if(iNo%3 == 0 && iNo%5 == 0)
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
    int iValue = 0 , iRet = 0;
    printf("Enter a numbers:");
    scanf("%d",&iValue);

    iRet = DivNumber(iValue);
    if(iRet == true)
    {
        printf("Divisible by 3  and 5");
    }
    else
    { 
        printf("Not Divisible by 3 and 5");
    }
    return 0;
}