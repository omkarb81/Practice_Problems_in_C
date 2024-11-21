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

    //Updator
    if(fValue1 < 0.0f)
    {
        fValue1 = - fValue1;
    }
    if(fValue2 < 0.0f)
    {
        fValue2 = - fValue2;
    }

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

/*
  Step 5: Test the progarm
Test Case 1 :
Enter first number:
10.0
Enter first number:
20.0
Addition is :30.000000

Test Case 2 :
Enter first number:
-10.0
Enter first number:
20.0
Addition is :30.000000

Test Case 3 :
Enter first number:
10.0
Enter first number:
-20.0
Addition is :30.000000

Test Case 4 :
Enter first number:
-10.0
Enter first number:
-20.0
Addition is :30.000000

*/