#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    int a,b;
    scanf("%d",&a);
    scanf("\n%d",&b);
    // Find Minimum of a and b
    int result = ((a < b) ? a : b);
    while (result > 0) {
        if (a % result == 0 && b % result == 0) {
            break;
        }
        result--;
    }
    
    printf("%d",result);
    
    return 0;
}
