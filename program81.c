#include<stdio.h>
#include<stdlib.h>

int Addition ( int Arr[] , int iSize)
{
    int iSum = 0 , iCnt = 0;
    for (iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    } 
    return iSum;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int iCnt = 0 , iRet = 0;

  // Step 1 : Accept the number of element from user

    printf("Enter the number of element :\n");
    scanf("%d",&iLength);

   //Step 2 : Allocate the memory dynamically
    ptr = (int *)malloc(iLength * sizeof(int));
    
    // Step 3 : Accept the values and store into dynamic memory
    printf("Enter the element :\n");
    for(iCnt = 0; iCnt < iLength ; iCnt++  )
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    //Step 4 : Perform the operation

    iRet = Addition(ptr , iLength);

    printf("Addition is :%d" , iRet);

    //Step 5 : Deallocate memory
    free(ptr);


    return 0;
}


/*
   Step 1 : Accept the number of element from user
   Step 2 : Allocate the memory dynamically
   Step 3 : Accept the values and store into dynamic memory
   Step 4 : Perform the operation
   Step 5 : Deallocate memory




*/