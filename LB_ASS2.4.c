//Accept two numbers from user and display number in second number of times
//Input : 12 5
//output: 12 12 12 12 12
//Input : -2 3
//output: -2 -2 -2
//Input : 21 -3
//output: 21 21 21
#include<stdio.h>
void Display( int iNo, int iFrequency)
{
    int i = 0;
    if(iFrequency<0)
    {
        iFrequency= -iFrequency;
    }
    // Write Updater
    for(i = 0; i < iFrequency ; i++)
    {
    printf("%d",iNo);
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);
    printf("Enter frequency : ");
    scanf("%d",&iCount);
    Display(iValue , iCount);
    return 0;
}