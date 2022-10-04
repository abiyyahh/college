#include<stdio.h>

void main()
{
    int x, y, z;

    printf("masukkan nilai x : \n");
    scanf("%d", &x);
    printf("masukkan nilai y : \n");
    scanf("%d", &y);
    z = x - y;
    printf("hasil x-y adalah %d\n", z);

    z = x * y;
    printf("hasil x dikali y adalah %d\n", z);

    z = x + y;
    printf("hasil x+y adalah %d\n", z);

    z = x / y;
    printf("hasil x dibagi y adalah %d\n", z);

    z = x % y;
    printf("sisa hasil x dibagi y adalah %d\n", z);




}

