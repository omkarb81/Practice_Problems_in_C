#include<stdio.h>

int main()
{
    int Arr[4];
    int iCnt = 0;
    int sum = 0;
    
    printf("Enter the values :\n");

    for (iCnt = 0 ; iCnt < 4 ; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
        sum = sum + Arr[iCnt];   
    }

    printf("sum is : %d\n",sum);
    
    return 0;
}

// 6 2 5 1