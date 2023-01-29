#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
  int m1,m2,m3,m4,m5;
    float per;
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    per=(m1+m2+m3+m4+m5)/500.0*100.0;
    if(m1>=0&&m1<=100&&m2>=0&&m2<=100&&m3>=0&&m3<=100&&m4>=0&&m4<=100&&m5>=0&&m5<=100)
    {
    if(per>=90)
        printf("A");
    else if(per>=80&&per<90)
        printf("B");
    else if(per>=60&&per<80)
        printf("C");
    else
        printf("D");
    }
    else
    {
        printf("Invalid Score");
    }
    return 0;
}
