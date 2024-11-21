#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[] ,int iSize)
{
  int iMin = 0 ,iCnt = 0;
  iMin = Arr[0];
  for(iCnt = 0 ; iCnt < iSize ; iCnt++)
  {
    if(Arr[iCnt] < iMin)  
    {
      iMin = Arr[iCnt];
    }
  }
  return iMin;
    
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

    iRet = Minimum(ptr , iLength);

    printf("Minimum is : %d", iRet);
    return 0;
}