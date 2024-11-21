/*
START
  GET Percentage from user
  check the Percentage is less than 40 or not
  print of it it is equal and greater than 40 then pass
  or write fail
STOP
*/

#include<stdio.h>

void DisplayResult(float fPercentage)
{
    if(fPercentage < 0.0f  || fPercentage > 100.0f)
    {
      printf("Invalid percentage!!");
      return ;
    }
    else{
     if(fPercentage >= 40.0f)
    {
        printf("You are PASS");
    }else
    {
        printf("You are Fail");
    }
    }
    
}

int main()
{
    float fValue = 0.0f;

    printf("Enter the percentage:\n");
    scanf("%f",&fValue);

    DisplayResult(fValue);


    return 0;
}