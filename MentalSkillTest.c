#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,b;
    char ch;
    scanf("%d%d",&a,&b);
    scanf("\n%c",&ch);
    
    int sum=a+b;
    int diff=a-b;
    int divd=a/b;
    int multi=a*b;
    int rem=a%b;
    
    if(ch == '+')
        printf("%d",sum);
    else if(ch=='-')
        printf("%d",diff);
    else if(ch=='*')
        printf("%d",multi);
    else if(ch=='/')
        printf("%d",divd);
    else if(ch=='%')
        printf("%d",rem);
    else
        printf("Invalid Choice");

    return 0;
}
