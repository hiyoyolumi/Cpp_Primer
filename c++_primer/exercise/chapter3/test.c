#include <stdio.h>

int main()
{
    int a = 10;
    int *num = &a;

    printf("%d\n", ++(*num));

    return 0;
}