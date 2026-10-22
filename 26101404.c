#include<stdio.h>
int main(){
    int N;int sum=0;
    printf("enter your number:\n");
    scanf("%d",&N);
    for(int i=1;i<=N;i++){sum=sum+i;}
    printf("%d",sum);
    return 0;
}