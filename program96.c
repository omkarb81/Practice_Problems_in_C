#include<stdio.h>
#include<stdlib.h>

void ReverseDisplay(int Arr[] ,int iSize)
{
  int iCnt = 0;
  for(iCnt = iSize-1 ; iCnt >= 0 ; iCnt--)
  {
    printf("%d\n",Arr[iCnt]);
  }   
}

int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the number of element :\n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the element :\n");
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
      scanf("%d",&ptr[iCnt]);
    }

    ReverseDisplay(ptr , iLength);

    //printf("Minimum is : %d", iRet);
    return 0;
}