#include <stdio.h>
#include "cube.c"
#include "multiply.c"
#include "sum.c"
int main(){
    int a;
    printf("Enter your choice");
    printf("1.cube 2.sum 3.multipy 4.factorial 5.sqaure 6.reverse of a number 7.sum of first n natural numbers");
    scanf("%d",&a);
    int n;
    switch(a){
       case 1 : printf("Enter a number to find cube");
                scanf("%d",&n);
                printf("%d",cube(n));
                break;
       case 2 : printf("Enter a number to find sum of its digits");
                scanf("%d",&n);
                printf("%d",sum(n));
                break;
       case 3 : printf("Enter a number to find product of its digits");
                scanf("%d",&n);
                printf("%d",multiply(n));
                break;
       case 4 : printf("Enter a number to find factorial of a number");
                scanf("%d",&n);
                printf("%d",factorial(n));
                break;
       case 5:  printf("Enter a number to find square of  number");
                scanf("%d",&n);
                printf("%d",square(n));
                break;
       case 6:  printf("Enter a number to find reverse of number");
                scanf("%d",&n);
                printf("%d",reverse(n));
                break;
       case 7:  printf("Enter a number to find sum of n natural numbers");
                scanf("%d",&n);
                printf("%d",sumn(n));
                break;
       default: printf("Entered invalid input");
               
    }
   return 0;     
}