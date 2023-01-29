#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, i, j, fact, sum, temp;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        temp = i;
        sum = 0;

        while (temp > 0) {
            fact = 1;
            j = temp % 10;
            temp = temp / 10;

            for (; j > 0; j--) {
                fact = fact * j;
            }

            sum += fact;
        }

        if (sum == i) {
            printf("%d ", i);
        }
    }

}
