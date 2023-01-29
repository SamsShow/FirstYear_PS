#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,n,r,s=0;
    
    scanf("%d",&n);
    
    for(i=n;i>0; )
    {
        r=i%10;
        s=s*10+r;
        i=i/10;
    }
    
    if(s==n)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    
    
    return 0;
}
