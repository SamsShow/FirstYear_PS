#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int count = 0;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if ((arr[i] + arr[j]) % k == 0)
                count++;
    printf("%d\n", count);
    return 0;
}
//This program takes two integers n and k as inputs, n being the size of the array and k being the divisor. 
//The array elements are then inputted one by one and stored in arr. 
//The program then loops through all pairs of indices i and j and checks if arr[i] + arr[j] is divisible by k. If it is, the count is incremented. 
//Finally, the value of count is printed, which represents the number of pairs of indices for which arr[i] + arr[j] is divisible by k.




