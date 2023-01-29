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
