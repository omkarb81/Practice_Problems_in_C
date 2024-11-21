#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[] ,int iSize)
{
  int iMax = 0 ,iCnt = 0;
  iMax = Arr[0];
  for(iCnt = 0 ; iCnt < iSize ; iCnt++)
  {
    if(Arr[iCnt] > iMax)
    {
      iMax = Arr[iCnt];
    }
  }
  return iMax;
    
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

    iRet = Maximum(ptr , iLength);

    printf("Maximum is : %d", iRet);
    return 0;
}