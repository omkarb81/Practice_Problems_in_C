//5. Accept N numbers from user and display summation of digits of each
//number.
//Input : N : 6
//Elements : 8225 665 3 76 953 858
//Output : 17 17 3 13 17 21

#include<stdio.h>
#include<stdlib.h>
void DigitsSum(int Arr[],int iLength)
{
    int iCount=0;
    int iNo=0;
    int iSum=0;
    int iVal=0;
   
   for(iCount=0;iCount<iLength;iCount++)
   {
     iSum=0;
     iNo=Arr[iCount];
    while(iNo!=0)
    {
    iVal=iNo%10;
    iSum=iSum+iVal;
    iNo=iNo/10;
   }
   printf("%d\n",iSum);
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


DigitsSum(p,iSize);


free(p);
    return 0;
}


