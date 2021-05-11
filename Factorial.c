#include <stdio.h>
int factorial (int n)
{
    int fact=1;
    while (n>0)
    {
        fact=fact*n;
        n=n-1;
    }
    return(fact);
}

int main() {
 int num;
 int r;
 printf("enter number: ");
 scanf("%d",&num);
 r=factorial(num);
 printf("Factorial of %d is %d",num,r);
 
    return 0;
}
