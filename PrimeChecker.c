#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int test,n, i, c = 0;
    scanf("%d", &test);
    for(int j=0;j<test;j++){
        scanf("%d",&n);
        //logic
        for (i = 1; i <= n; i++) {
          if (n % i == 0) {
                c++;

              }
        }
       // printf("%d",c);
        if (c == 2) {
           printf("yes\n");
        }
        else {
            printf("no\n");
          }
        c=0;
    }

  
    return 0;
}
