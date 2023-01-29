#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int year;
    scanf("%d",&year);
    
    if (year % 400 == 0) {
      printf("leap year");
    }
    
    else if(year % 4 == 0 && year%100 !=0 ){
      printf("leap year");        
    }
    
    else{
        printf("not a leap year");
    }
    return 0;
}
