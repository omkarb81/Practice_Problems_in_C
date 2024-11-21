#include<stdio.h>

void DisplayTimeTable(int iStd)
{
    switch(iStd)
    {
        case 8 :
          
            printf("Your exam at 9.30AM");
            break;
          
        case 9 :
        
            printf("Your exam at 10.30AM");
            break;
        
        case 10 :
        
            printf("Your exam at 11.30AM");
            break;
        
        default :
        
            printf("Invalid standard");
            break;
        
    }
}  

int main()

{
    int iValue = 0;

    printf("Enter the standard :\n");
    scanf("%d",&iValue);

    DisplayTimeTable(iValue);

    return 0;
}