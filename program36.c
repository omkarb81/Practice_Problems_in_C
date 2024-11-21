#include<stdio.h>

void Display(int iNo)
{  int iCount = 0;
   iCount = 1;
   
   while(iCount<=iNo)
   {
    printf("%d) Jay Ganesh...\n",iCount);
    iCount++;
   };
}

int main()
{
    int iValue = 0;

    printf("Enter the numbers :\n");
    scanf("%d", &iValue);

    Display(iValue);


    return 0;
}