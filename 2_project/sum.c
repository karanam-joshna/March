#include <stdio.h>
int sum(int x){
    int s=0,m;
    while(x>0){
        m=x%10;
        s=s+m;
        x=x/10;
    }
    return s;
}
int reverse(int x){
   int rev=0,rem;
   while (x!=0){
       rem = x%10;
       rev = rev*10 + rem;
       x = x/10;
   }
   return rev;
}