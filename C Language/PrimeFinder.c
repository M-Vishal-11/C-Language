#include<stdio.h>
void LCM(int n);

int main(){
    int n;
    scanf("%d", &n);

    LCM(n);
    return 0;
}
void LCM(int n){
    int sum = 0;
    for(int i = 2; i <= n; i++){
        if(n%i==0){
            sum = i;
            break;
        }
    }
    if(n/sum==1){
        printf("%d is a Prime Number", n);
    }else{
        printf("%d is not a Prime Number", n);
    }
}
