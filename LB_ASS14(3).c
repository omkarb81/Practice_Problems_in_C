// 3. Accept N numbers from user check whether that numbers contains 11 in
// it or not.
// Input : N : 6

// Elements :85 66 11 80 93 88

// Output : 11 is present
// Input : N : 6

// Elements :85 66 3 80 93 88

// Output : 11 is absent
// Program Layout :

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{
  int iCnt = 0;
  int Flag = 0;
  for(iCnt = 0 ; iCnt < iLength ; iCnt++)
  {
    if(Arr[iCnt] == 11)
    {
      Flag = 1;
      break;
    }
  }
  return Flag;
}

int main()
{
  int iSize = 0,iCnt = 0;
  BOOL bRet = FALSE;
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
  bRet = Check(p, iSize);

  if(bRet == TRUE)
  {
    printf("11 is present");
  }
  else
  {
    printf("11 is not present");
  }
  free(p);
  return 0;
}