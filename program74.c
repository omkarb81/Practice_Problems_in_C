#include<stdio.h>
#include<stdlib.h>

int main()
{

    int iLength = 0;
    int *ptr = NULL;

    printf("Enter the number of element \n");
    scanf("%d",&iLength);

    ptr = (int *) malloc(iLength * sizeof(int));

    //use

    free(ptr);

    return 0;
}