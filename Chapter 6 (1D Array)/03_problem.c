// Write a program that counts the number of even elements in an array.
// int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

#include <stdio.h>
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    for(int i=0; i<size; i++){
        if(arr[i]%2==0){
            count++;
        }
    }
    printf("the count of even elements is: %d ", count);
    return 0;
}