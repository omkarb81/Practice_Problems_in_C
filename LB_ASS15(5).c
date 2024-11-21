// 5. Accept N numbers from user and return product of all odd elements.
// Input : N : 6

// Elements :15 66 3 70 10 88

// Output : 45
// Input : N : 6

// Elements :44 66 72 70 10 88

// Output : 0


#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
  int iCnt = 0 , iResult = 1;
  for(iCnt = 0 ; iCnt < iLength ; iCnt++)
  {
    if(Arr[iCnt]%2 != 0)
    {
      iResult = iResult * Arr[iCnt];
    }
  }
  
  return iResult;
}


int main()
{
  int iSize = 0,iCnt = 0 , iRet = 0;
  int iValue1 = 0 ,iValue2 = 0;
  int *p = NULL;
  printf("Enter number of elements\n");
  scanf("%d",&iSize);

  p = (int *)malloc(iSize * sizeof(int));

  if(p == NULL)
  {
  printf("Unable to allocate memory");
  return -1;
  }

  printf("Enter %d elements\n",iSize);
  for(iCnt = 0;iCnt<iSize; iCnt++)
  {
  printf("Enter element %d:",iCnt+1);
  scanf("%d",&p[iCnt]);
  }


  iRet = Product(p, iSize);
  printf("Product is %d",iRet);
  
  free(p);
  return 0;
}