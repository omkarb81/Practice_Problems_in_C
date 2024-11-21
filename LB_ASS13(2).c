// 2. Accept N numbers from user and display all such elements which are
// divisible by 5.
// Input : N : 6

// Elements :85 66 3 80 93 88

// Output : 85 80

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[] ,int iLength)
{
  int iCnt = 0 ;
  for(iCnt = 0 ; iCnt < iLength ; iCnt++)
  {
    if(Arr[iCnt]%5 == 0)
    {
      printf("%d\t",Arr[iCnt]);
    }
  }
}

int main()
{
  int iSize =0 , iCnt = 0 ;
  int *p = NULL;

  printf("Enter the number of elements\n");
  scanf("%d",&iSize);

  p = (int *)malloc(iSize * sizeof(int));
  printf("Enter the element\n");
  for(iCnt = 0 ; iCnt < iSize ; iCnt++)
  {
    scanf("%d",&p[iCnt]);
  }

  Display(p,iSize);

  free(p);

  return 0;
}