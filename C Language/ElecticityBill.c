#include<stdio.h>
int main(){
    struct house{
        char holderName[100];
        int units;
    };
    struct house h1;
    scanf("%s %d", h1.holderName, &h1.units);

    float cost = 0;
    int moneyNeed = 0;
    if(h1.units <= 100){
        cost = 4.80;
        moneyNeed = cost*h1.units;
    }else if(h1.units>100 && h1.units < 200){
        cost = 5.80;
        moneyNeed = cost*h1.units;
    }else{
        cost = 6.50;
        moneyNeed = cost*h1.units;
    }
    printf("%s needs to pay %d", h1.holderName ,moneyNeed);
}