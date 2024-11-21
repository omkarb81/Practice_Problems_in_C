#include<stdio.h>

void Display(int iRow ,int column )
{
   char ch = 'a';
   int i = 0 , j = 0;
   if( iRow != column)
   {
    printf("Invalid input..\n");
    return;
   }
   for(i = 1 ; i <= iRow ; i++ )
   {
     for( j = 1 ; j<= column ; j++ )
     {
       if(i == j)
       {
        printf("*\t");
       }
       else
       {
        printf("%c\t",ch); 
        
       }
       ch++;
       
       
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