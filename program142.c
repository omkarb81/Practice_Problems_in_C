#include<stdio.h>

void Display(int Row ,int column )
{
   int i = 0 , j = 0;

   for(i = 1 ; i <= Row ; i++ )
   {
     for( j = 1  ; j<= column ; j++ )
     {
       if(i == 1 || j == 1  || i == Row || j == column )
       {
        printf("*\t");
       }
       else 
       {
        printf("$\t"); 
       }
       
     }
     printf("\n"); 
   }
      
}

int main()
{
    int iValue1 = 0 ,iValue2 = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue1);

    printf("Enter the number\n");
    scanf("%d",&iValue2);

    Display(iValue1  ,iValue2);

    return 0;
}