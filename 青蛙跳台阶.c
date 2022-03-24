#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int jump(int n)
{
    if (n == 2)
    {
        return 2;
    }
    else if (n == 1)
        return 1;
    else
    return jump(n - 1) + jump(n - 2);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", jump(n));
         return 0;
}