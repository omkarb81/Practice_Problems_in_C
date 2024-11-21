#include<stdio.h>

void Display(int *ptr , int iSize)
{
    int iCnt = 0;
    printf("Values of the array:\n");
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("%d\n",*ptr);
        ptr++;
    }
    
}

int main()
{
    
    int Arr[6];
    int iCnt = 0;
    
    printf("Enter the values :\n");

    for (iCnt = 0 ; iCnt < 6 ; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    
    Display(Arr , 6);
    return 0;
}

// 6 2 5 1