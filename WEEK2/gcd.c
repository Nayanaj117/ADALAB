#include <stdio.h>


int gcd(int a, int b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;

    if (a == b)
        return a;

    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main()
{
    int a,b;
    printf("Enter two positive numbers:\n");
        scanf("%d %d",&a,&b);
    printf("GCD of %d and %d is %d ", a, b, gcd(a, b));
    return 0;
}
