#include <stdio.h>
// 0 1 1 2 3 5 8 13 21 34 ......
int fibonacci(int n);
int fibonacci(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int n;
    printf("enter the nth value till u want fibonacci to run: ");
    scanf("%d", &n);
    printf("the fibonacci series at %d is %d", n, fibonacci(n));
    

    return 0;
}