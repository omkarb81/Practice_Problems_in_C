#include <stdio.h>
#include <stdlib.h>

int* DivNumber(int iNo, int *count)
{
    int *Arr = (int*)malloc(5 * sizeof(int));  // Allocate memory for storing divisors
    int iCnt = 0, index = 0;

    if (Arr == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }

    // Find divisors of iNo
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            Arr[index++] = iCnt;

            // Reallocate memory if more divisors are found than initially allocated
            if (index >= *count) {
                *count += 5;
                Arr = (int*)realloc(Arr, (*count) * sizeof(int));
                if (Arr == NULL) {
                    printf("Memory reallocation failed!\n");
                    return NULL;
                }
            }
        }
    }

    *count = index;  // Update count with the actual number of divisors
    return Arr;
}

int main()
{
    int iValue = 0, count = 5;
    int *iArr = NULL;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iArr = DivNumber(iValue, &count);

    if (iArr != NULL) {
        printf("The divisors are: ");
        for (int i = 0; i < count; i++) {
            printf("%d\t", iArr[i]);
        }
        free(iArr);  // Free the dynamically allocated memory
    }

    return 0;
}
