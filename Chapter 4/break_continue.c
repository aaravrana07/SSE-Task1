#include <stdio.h>

int main(){
    int n=15, i;
    for(i=1; i<n; i++){
        if(i==5){
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}