#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    
    int n;
    scanf("%d",&n);
    int height = (-1 + sqrt(1 + 8 * n)) / 2;
    printf("%d",height);
    //return 0;
}
