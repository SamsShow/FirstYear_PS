#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  
    float p,r,t;
    scanf("%f",&p);
    scanf("%f",&r);
    scanf("%f",&t);
    
    float si=(p*r*t)/100;
    float ci=p*(pow(1+r/100.0,t)-1.0);
    
    printf("%.2f\t",si);
    printf("%.2f",ci);
    return 0;
}
