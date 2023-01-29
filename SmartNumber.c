#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int countFactors(int n)
{
    int count = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                count++;
            else
                count = count + 2;
        }
    }
    return count;
}

int isSmartNumber(int num)
{
    int factors = countFactors(num);
    if (factors % 2 == 1)
        return 1;
    return 0;
}

int main() {

    int num;
    scanf("%d", &num);
    int check = isSmartNumber(num);
    if (check == 1)
        printf("Yes\n");
    else
        printf("No\n");   
    return 0;
}

//This program takes an integer num as input and checks if it is a smart number or not. 
//The countFactors function calculates the number of factors of num. 
//If the number of factors is odd, isSmartNumber returns 1 which represents that num is a smart number. 
//If the number of factors is even, isSmartNumber returns 0 which represents that num is not a smart number. 
//Finally, the result of isSmartNumber is printed as "Yes" if num is a smart number and "No" if it is not.
