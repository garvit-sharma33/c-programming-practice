#include <stdio.h>
int main()
{
    int n;
    int digit;
    int count = 0;
    int sum = 0;
    int largest = 0;

    printf("Enter a Positive Number:");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Number is Negative");
        return 0;
    }

    while (n > 0)
    {
        digit = n % 10;
        count += 1;
        sum += digit;

        if (digit > largest)
            largest = digit;

        n = n / 10;
    }

    printf("total digits is %d\n", count);
    printf("Sum is %d\n", sum);
    printf("Largest digit is %d", largest);

    return 0;
}