#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   
    float sal,HRA,DA;
    scanf("%f",&sal);
    
    if(sal<=10000){
        HRA = (sal*8)/100;
        DA = (sal*10)/100;
    }
    
    else if(sal<=20000){
        HRA = (sal*16)/100;
        DA = (sal*20)/100;
    }
    
    else if(sal>20000){
        HRA = (sal*24)/100;
        DA = (sal*30)/100;
    }
    
    //float gross=sal+HRA+DA;
    printf("%.2f",sal+HRA+DA);
    
    return 0;
}
