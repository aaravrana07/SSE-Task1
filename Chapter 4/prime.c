#include <stdio.h>

int main()
{
    int n = 0;
    int prime = 0;
    if (n == 0 || n == 1)
    {
        printf("%d is not prime\n", n);
        return 0;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0 && n != 2)
            {
                prime = 1;
                break;
            }
        }
    }
    if (prime)
    {
        printf("%d is not prime\n", n);
    }
    else
    { // prime=0 wali condition
        printf("%d is prime\n", n);
    }
    return 0;
}