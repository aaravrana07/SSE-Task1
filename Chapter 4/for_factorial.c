#include <stdio.h>

int main(){
    int product=1, n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        product*=i;
    }
    printf("%d\n", product);
    return 0;
}