#include<stdio.h>
#include<stdbool.h>

bool Div(int iNo)
{
    if(iNo%5 == 0)
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

    iRet = Div(iValue);
    if(iRet == true)
    {
        printf("Divisible by 5");
    }
    else
    { 
        printf("Not Divisible by 5");
    }
    return 0;
}