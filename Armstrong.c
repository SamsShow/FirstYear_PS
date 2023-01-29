#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int count, limit, rem, temp, num, n,op=0;  
    float sum;  
  
    scanf("%d%d", &count, &limit);  
  
  
    while(count <= limit)  
    {  
        num = temp = count;  
        n   = sum  = 0;  
  
        while(temp)  
        {  
            temp = temp / 10;  
            n++;  
        }  
  
        while(num)  
        {  
            rem = num % 10;  
            sum = sum + pow(rem, n);  
            num = num / 10;  
        }  
  
        if(count == sum)  
        {  
            printf("%d\t", count);
            op++;
        }  
  
        count++;  
    }  
    printf("\n%d",op);
  

return 0;  
}
