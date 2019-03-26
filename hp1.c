#include <stdio.h>
#include <stdlib.h>
//program to reverse the digits of a floating point number
//like : input -> 123.456, output -> 321.654
int rev_num(int number)
{
    int rev_numb = 0;
    while(number > 0)
    {
        rev_numb = rev_numb*10 + number%10;
        number /= 10;
    }
    return rev_numb;
}

int main()
{
    float num;
    int fact = 100000;

    printf("Enter any number between (10^10 - 1) and 10^-5\n");
    scanf("%f",&num);

    int intPart = (int)num;          // integer part of the given number
    float fractPart = num - intPart; // decimal part

    int conv = fractPart * fact;    // converting decimal part to int

    int revInt = rev_num(intPart); // reversing the actual int part
    int floatInt = rev_num(conv);  // reversing the new int part

    printf("%d.%d\n", revInt, floatInt);
    return 0;
}
