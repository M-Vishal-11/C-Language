#include<stdio.h>

int main(){
    int n;
    int fact = 1;
    scanf("%d", &n);
    for(int i = n; i > 0; i--){
        fact = fact * i;
    }
    printf("%d", fact);
    return 0;
}