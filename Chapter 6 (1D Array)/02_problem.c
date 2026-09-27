// Write a program that reverses the elements in an array.
// int arr[] = {1, 2, 3, 4, 5};

#include <stdio.h>

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size=sizeof(arr)/sizeof(arr[0]);

    // Lets print original array
    printf("original array is: ");
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    
    // Lets print reversed array
    printf("\n reversed array is: ");
    for(int i=size-1; i>=0; i--){
        
        printf("%d ", arr[i]);
    

    }
    return 0;
}