#include<stdio.h>

int count=0;

void stair(int n){
    if(n==0 || n==1){
        count++;
        return;
    }
    stair(n-1);
    stair(n-2);
}

void main(){
    int n;
    scanf("%d", &n);
    stair(n);
    printf("%d", count);
}