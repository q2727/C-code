#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
void change(char A, char B)
{
    printf("%c-->%c\n", A, B);
}
void Hanoi(int n, char A, char B, char C)
{
    if (n == 1)
    {
        change(A, C);
    }
    else
    {
        Hanoi(n - 1, A, C, B);
        change(A, C);
        Hanoi(n - 1, B, A, C);
    }
}
int main()
{
    int n;
    char A = 'A';
    char B = 'B';
    char C = 'C';
    scanf("%d", &n);
    Hanoi(n,A,B,C);
         return 0;
}