#include <stdio.h>
void main()
{
    int number;
    printf("Enter a number to check: ");
    scanf("%d",&number);
    int rev = 0;
    int num = number;
    while (num != 0)
    {
        int r = num % 10;
        rev = rev * 10 + r;
        num /= 10;
    }
    if (number == rev)
    {
        printf(" Given number %d is a palindrome number",
                number);
    }
    else
    {
        printf("Given number %d is not a palindrome number",
                number);
    }
}