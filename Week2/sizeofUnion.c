#include <stdio.h>

union Sample{
    int num1;
    float num2;
};

int main()
{
    union Sample Union;

    printf("Size of union: %ld", sizeof(Union));

    Union.num1 = 5;
    printf("\nNum1: %d , Num2: %f", Union.num1, Union.num2);

    Union.num2 = 10.00;
    printf("\nNum1: %d , Num2: %f", Union.num1, Union.num2);

    return 0;
}