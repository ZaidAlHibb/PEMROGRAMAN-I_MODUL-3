#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    if(n < 0){
        printf("negatif");
    }else if (n == 0){
        printf("nol");
    }else{
        printf("positif");
    }
    return 0;
}