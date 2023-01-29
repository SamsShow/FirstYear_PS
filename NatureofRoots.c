#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    double a, b, c, D;
    scanf("%lf%lf%lf",&a,&b,&c);
    
    D = b * b - 4 * a * c;
    
    if(a==0)
        printf("Invalid Coefficient");
        
    else if(D>0){
        printf("Roots are real and distinct");
    }
    else if(D==0){
        printf("Roots are real and equal");
    }
    else{ //if(D<0){
        printf("Roots are imaginary");
    }
    return 0;
}
