#include<stdio.h>
int main(){
    int N;
    int sum=0;
    printf("enter the number:");
    scanf("%d",&N);
    int i=2;
    while(i<=N){
        sum=sum+i;
        i=i+2;
    }printf("%d",sum);
    return 0;

}