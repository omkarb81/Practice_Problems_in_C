#include<stdio.h>

float AreaCircle(float radius)
{
    float Ans = 0.0f;
    Ans = 3.14 *radius * radius;
    return Ans;
}

int main()
{
    float fRadius = 0.0f;
    float fArea = 0.0f;

    printf("Enter the radius of circle :");
    scanf("%f",&fRadius);

    fArea = AreaCircle(fRadius);

    printf("Area of circle is : %f\n",fArea);


    return 0;
}