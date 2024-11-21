#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
//   
//     Function Name : Addition
//     Desciption :    It is to perform addition of 2 float numbers
//     Input :         Float , Float
//     Output :        Float
//     Author :        Omkar Deepak Borate
//     Date :          06/10/2024
//
///////////////////////////////////////////////////////////////////////////////////////////////////


float Addition(float fValue1 , float fValue2)
{
    float fAdd = 0.0f;                                   //Local Variable for result
    fAdd = fValue1 + fValue2;                            //Business Logic
    return fAdd;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
//      
//   This application is perform addition of 2 numbers
//
//////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    float fNo1 = 0.0f, fNo2 = 0.0f , fAns = 0.0f;        //Local variable for input

    printf("Enter first number:\n");
    scanf("%f",&fNo1);

    printf("Enter first number:\n");
    scanf("%f",&fNo2);

    fAns = Addition(fNo1 , fNo2);                        //Funaction call                                  

    printf("Addition is :%f\n",fAns);


    return 0;
}