//   Write a program that finds the maximum element in an array of
//   integers.
//   int arr[] = {5, 8, 3, 10, 6};

#include <stdio.h>
int main()
{
    int arr[] = {5, 8, 3, 10, 6};
    int sizearr = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    for (int i = 1; i < sizearr; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("the max element in array is %d", max);

    return 0;
}