#include<stdio.h>
void GCD(int a, int b, int *gcdValue);
int main(){
    int a , b;
    scanf("%d %d", &a, &b);
    int gcdValue = 0;
    GCD(a, b, &gcdValue);
    printf("%d", gcdValue);
    return 0;
}
void GCD(int a, int b, int *gcdValue){
    for(int j = 2 ; j < 10; j++){
            if(a%j == 0 && b%j==0){
                *gcdValue = *gcdValue + j;
                a /= j;
                b /= j;
                GCD(a, b, gcdValue);
                break;
            }
    }
}
