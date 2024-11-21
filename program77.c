#include<stdio.h>
#include<stdlib.h>

void Function ( int Arr[] , int iSize)
{
    //Logic
}

int main()
{
    int iCnt = 0;
    int iLength = 0;
    int *ptr = NULL;

    printf("Enter the number of element \n");
    scanf("%d",&iLength);

    ptr = (int *) malloc(iLength * sizeof(int));

    printf("Enter the elements\n");

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
       scanf("%d",&ptr[iCnt]);
    }

    printf("Elements of array\n");
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
       printf("%d\n",ptr[iCnt]);
    }

    Function(ptr , iLength);
    free(ptr);

    return 0;
}