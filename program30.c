#include<stdio.h>

void Display(int iNo)
{  int iCount = 0;
   for( iCount =  4; iCount <= iNo ; iCount++)
    {
        printf(iCount);
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