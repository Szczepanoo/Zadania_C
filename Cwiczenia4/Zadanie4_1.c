#include <stdio.h>

int factorial(int n){
    if (n == 0 || n == 1){
        return 1;
    }

    return n * factorial(n-1);
}

int main(){

    int n;
    printf("Podaj liczbe 'n': ");
    scanf("%d",&n);
    printf("Silnia wynosi: %d",factorial(n));




    return 0;
}

