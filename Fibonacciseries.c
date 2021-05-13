
// display series 1,1,2,3,5..
#include <stdio.h>

int main()
 {
    int f=1,f1=1;
    int f2=0;
    int last_term;
    printf("enter last ele of fibonacci series");
    scanf("%d",&last_term);
    printf("\n%d\n%d",f,f1);
    while (f2!=last_term)
    {
        f2=f+f1;
        f=f1;
        f1=f2;
        printf("\n%d",f2);
    }
    return 0;
 }
