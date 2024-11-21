#include<stdio.h>

void Display(int *ptr)
{
    int iCnt = 0;
    printf("Values of the array:\n");
    for(iCnt = 0 ; iCnt < 4 ; iCnt++)
    {
        printf("%d\n",*ptr);
        ptr++;
    }
    
}

int main()
{
    int Arr[4];
    int iCnt = 0;
    
    printf("Enter the values :\n");

    for (iCnt = 0 ; iCnt < 4 ; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    
    Display(Arr);
    return 0;
}

// 6 2 5 1