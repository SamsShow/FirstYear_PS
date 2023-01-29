#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isPerfect(int num) {
    int i, sum = 0;
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return (sum == num);
}

int main() {
    int num;
    scanf("%d", &num);
    if (isPerfect(num)) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}
