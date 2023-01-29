#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
int main()
{
    int n;
    int t1=0;
    int t2=1;
    int nextTerm =0;

    scanf("%d",&n);

    if(n==0 || n==1){
       printf("%d",t1);
    }
    else if(n==2){
        printf("%d",t2);
    }
    else{
        nextTerm=t1+t2;
        for (int i = 3; i <= n; ++i){
            t1 = t2;
            t2 = nextTerm;
            nextTerm = t1 + t2;
        }
       printf("%d", t2);
    }
    
    return 0;
}
