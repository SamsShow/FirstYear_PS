#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, digit, product=1;

    //printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10; // get the last digit of the number
        product *= digit; // multiply the product with the digit
        n /= 10; // remove the last digit from the number
    }
    printf("%d",product);
    return 0;
}
