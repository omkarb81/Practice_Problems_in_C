//Write a program of addition of two number

/*
Step 1: Understand problem  
*/

/*
step 2 :Write algorithm

START
  Accept first input
  accept second input
  if any input is negative it convert it into positive
  add both number
  display the result
STOP
*/

/*
step 3 :Select c programming language
*/

/*
Step 4 : write the program
*/



#include<stdio.h>

float Addition(float fValue1 , float fValue2)
{
    float fAdd = 0.0f;
    fAdd = fValue1 + fValue2;
    return fAdd;
}

int main()
{
    float fNo1 = 0.0f, fNo2 = 0.0f , fAns = 0.0f;

    printf("Enter first number:\n");
    scanf("%f",&fNo1);

    printf("Enter first number:\n");
    scanf("%f",&fNo2);

    fAns = Addition(fNo1 , fNo2);

    printf("Addition is :%f\n",fAns);


    return 0;
}