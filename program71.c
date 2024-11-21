#include<stdio.h>

void Display(int *ptr)
{
    printf("Values of the array:\n");
    printf("%d\n",ptr[0]);
    printf("%d\n",ptr[1]);
    printf("%d\n",ptr[2]);
    printf("%d\n",ptr[3]);
}

int main()
{
    int Arr[4];
    int iCnt = 0;
    int sum = 0;
    
    printf("Enter the values :\n");

    for (iCnt = 0 ; iCnt < 4 ; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    
    Display(Arr);
    return 0;
}

// 6 2 5 1