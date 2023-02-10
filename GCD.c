#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int n1, n2;

    //printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    printf("%d",gcd(n1, n2));
    return 0;
    
}
