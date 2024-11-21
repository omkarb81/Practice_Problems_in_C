#include<stdio.h>
#include<stdlib.h>

int AdditionEvenOdd ( int Arr[] , int iSize)
{
    int  iCnt = 0;
    int iCount = 0 , iEven = 0 , iOdd = 0;
    for (iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt]%2 == 0)
       {
        iEven = iEven + Arr[iCnt];
       }
       else
       {
        iOdd = iOdd + Arr[iCnt];
       }
    } 
    printf("Addition even element is %d",iEven); 
    printf("Addition odd element is %d",iOdd); 

    
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

    AdditionEvenOdd(ptr , iLength);

    //printf("Addition of odd number is :%d" , iRet);

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