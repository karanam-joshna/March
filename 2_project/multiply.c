#include <stdio.h>
int multiply(int x){
    int rem,p=1;
    while(x!=0){
        rem=x%10;
        p=p*rem;
        x= x/10;
    }
    return p;
}
int factorial(int x){
    int f=1,i=1;
    for(i=1;i<=x;++i){
        f=f*i;
    }
    return f;
}