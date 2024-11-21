#include<stdio.h>

void DisplayTimeTable(int iStd)
{
    if(iStd == 8)
    {
        printf("Your exam at 9.30 AM\n");
    }
    else if (iStd == 9)
    {
        printf("Your exam at 10.30 AM\n");
    }
    else if (iStd == 10)
    {
        printf("Your exam at 11.30 AM\n");
    }
    else
    {
        printf("Invalid standard\n");
    }
}  

int main()

{
    int iValue = 0;

    printf("Enter the standard :\n");
    scanf("%d",&iValue);

    DisplayTimeTable(iValue);

    return 0;
}