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
    int n, i;
    printf("enter the nth value till u want fibonacci to run: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        printf("%d ", fibonacci(i));
    }
    return 0;
}