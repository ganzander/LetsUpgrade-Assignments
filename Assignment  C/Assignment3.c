#include <stdio.h>
#include <math.h>
int main()
{
    int palindrome = 0;
    int n;
    printf("Enter the number");
    scanf("%d", &n);
    int num = n;
    while (n > 0)
    {
        int digits = log10(n);
        int sum = (n % 10) * pow(10, digits);
        palindrome = palindrome + sum;
        n = n / 10;
    }
    printf("palindrome of %d is %d", num, palindrome);

    return 0;
}