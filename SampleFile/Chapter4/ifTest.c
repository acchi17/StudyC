#include <stdio.h>

void main(void)
{
    int input, thr;

    thr = 10;

    printf("Input integral value >>");
    scanf("%d", &input);

    if (input < thr)
    {
        printf("Input value is smaller than %d.", thr);
    }
    else
    {
        printf("Input value is bigger than %d.", thr);
    }
}