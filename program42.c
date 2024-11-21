#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\n",iCnt);
    }

}



int main()
{
    int iValue = 0;
    printf("Enter a numbers:");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}