#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, digit, sum;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
        while(n > 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }
    printf("%d\n",sum);
    return 0;
}
