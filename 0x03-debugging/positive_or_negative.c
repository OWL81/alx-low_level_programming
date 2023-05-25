#include "main.h"
#include <stdio.h>

void positive_or_negative(int number)
{
    if (number > 0)
        printf("%d is positive\n", number);
    else if (number < 0)
        printf("%d is negative\n", number);
    else
        printf("%d is zero\n", number);
}

