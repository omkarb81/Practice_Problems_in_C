/*
4. Accept N numbers from user and display all such numbers which contains
3 digits in it.
Input : N : 6
Elements : 8225 665 3 76 953 858
Output : 665 953 858
*/

#include<stdio.h>
#include<stdlib.h>
void Digits(int Arr[],int iLength)
{
    int iCount=0;
    int iNo=0;
    int iFlag=0;
   
   for(iCount=0;iCount<iLength;iCount++)
   {

     iNo=Arr[iCount];
     iFlag=0;
    while(iNo!=0)
    {
    iNo=iNo/10;
    iFlag++;
    }

    if(iFlag==3)
    {
        printf("%d\n",Arr[iCount]);
    }

   }
 
}

int main()
{
    int iSize=0;
    int iCnt=0;
     int *p=NULL;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    p=(int *)malloc(iSize*sizeof(int));
     
     if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enetr %d element\t",iCnt+1);
        scanf("%d",&p[iCnt]);
    }


Digits(p,iSize);


free(p);
    return 0;
}


