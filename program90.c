#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Frequency ( int Arr[] , int iSize , int iNo)
{
    int  iCnt = 0;
    int iCount = 0 , iEven = 0 , iOdd = 0;
    for (iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] == iNo)
       {
         break;
       }       
    } 
    
    if(iCnt == iSize)
    {
        return false;
    }
    else
    {
        return true;
    }
    

    
}

int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int iCnt = 0 , iRet = 0 , iValue = 0;

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

    printf("Enter the number that you want to search :\n");
    scanf("%d",&iValue);
    
    //Step 4 : Perform the operation

    iRet = Frequency(ptr , iLength , iValue);

    if(iRet == true)
    {
        printf("Element is present");
    }
    else
    {

        printf("Element is not present");
    }
    

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