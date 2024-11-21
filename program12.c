#include<stdio.h>


float CalculatePercentage(int imarks , int itotal)
{
   float  iResult = 0.0f;
   iResult = ((float)imarks / (float)itotal) * 100;
   return iResult; 
}

int main()
{
    int iMarks = 0 , iTotal = 0 ;
    float iAns = 0.0f;

    printf("Enter the marks obtained : ");
    scanf("%d", &iMarks);

    printf("Enter the total marks : ");
    scanf("%d", &iTotal);

    iAns = CalculatePercentage(iMarks,iTotal);

    printf("Percentage is :%f",iAns);


}