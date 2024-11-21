#include<stdio.h>

void Display(int iNo)
{  int iCount = 0;
   for( iCount =  iNo; iCount >=1 ; iCount--)
    {
        printf("%d\n", iCount);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the numbers :\n");
    scanf("%d", &iValue);

    Display(iValue);


    return 0;
}