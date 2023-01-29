#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int var1, var2;
    float var3, var4;

    scanf("%d %d", &var1, &var2);
    scanf("%f %f", &var3, &var4);

    int z=abs(var1-var2);
    float y=fabs(var3-var4);
    
    printf("%d %d\n", (var1+var2), z);
    printf("%.1f %.1f", (var3+var4), y);
}
