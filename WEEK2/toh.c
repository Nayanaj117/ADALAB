#include <stdio.h>
void towers(int, char, char, char);
 int main()
{
    int n;
    printf("Enter the number of disks:\t");
    scanf("%d", &n);
    printf("The disk is moved in the order :\n");
    towers(n, 'A', 'C', 'B');
    return 0;
}
void towers(int n, char src, char dest, char temp)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from %c to %c", src, dest);
        return;
    }
    towers(n - 1, src, temp, dest);
    printf("\n Move disk %d from %c to %c", n, src, dest);
    towers(n - 1, temp, dest, src);
}
