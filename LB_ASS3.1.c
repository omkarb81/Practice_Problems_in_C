//1.Write a program which accept one number from user and print that number of even numbers on screen
//Input: 7
//output:2 4 6 8 10 12 14
#include<stdio.h>

void PrintEven(int iNo)
{
    int  iCount = 0;
    if(iNo <= 0)
    {
    return;
    }
   
    for(iCount = 1 ; iCount <= iNo ; iCount++)
    {
        printf("%d\t",2*iCount);
        
    }
}  
    

int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    PrintEven(iValue);
    return 0;
}