// 5.Write a program which accept number from user and return difference between
// summation of all its factors and non factors.

// Marvellous Logic Building Assignment : 4

// Input : 12
// Output : -34 (16 - 50)
// Input : 10
// Output : -29 (8 - 37)

#include<stdio.h>
int SumNonFact(int iNo)
{
int i=0;
int iFact = 0 , iNonFact = 0;

for(i=1;i<iNo;i++)
{   
    if(iNo%i ==0)
    {
        iFact = iFact + i;
    }
    else{
        iNonFact = iNonFact + i;
    }

}
        return (iFact - iNonFact);

}
int main()
{
int iValue = 0;
int iRet = 0;
printf("Enter number");
scanf("%d",&iValue);
iRet = SumNonFact(iValue);
printf("%d",iRet);
return 0;
}