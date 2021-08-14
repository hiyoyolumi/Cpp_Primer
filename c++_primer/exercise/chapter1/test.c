#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = NULL;
    printf("%p\n", p);
    printf("%p\n", &p);

    p = (int *)malloc(sizeof(int));
    printf("%p\n", p);
    printf("%p\n", &p);

    return 0;
}