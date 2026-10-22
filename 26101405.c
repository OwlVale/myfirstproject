#include<stdio.h>
#include<math.h>
int function(int x){
    int a,b,c;
    a=x*x+1;
    b=2*x-5;
    c=sqrt(x);
    if(x<0){return a;
    }else if(x>=0 && x<=10){
        return b;
    }else{return c;}
}
int main(){int x;
    printf("enter the x:\n");
    scanf("%d",&x);
    int result=function(x);
    printf("f(x) is %d",result);
    return 0;
}