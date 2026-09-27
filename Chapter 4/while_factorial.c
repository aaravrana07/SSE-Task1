#include <stdio.h>

int main(){
    int product=1, n;
    scanf("%d", &n);
    int i=1;
    while(i<=n){
        product*=i;
        i++;
    }
    printf("%d\n", product);
    return 0;
}