#include <stdio.h>
#include <stdlib.h>

//program to reverse the digits of a floating point number
//like : input -> 123.456, output -> 654.321

int rev_num(int number)    //function to reverse the digits in a number
{
    int rev_numb = 0;
    while(number > 0)
    {
        rev_numb = rev_numb*10 + number%10;
        number/= 10;
    }
    return rev_numb;
}

int main()     //main begins here
{
    float rnum;
    int fact = 100000;

    printf("Enter any number between (10^10 - 1) and 10^-5\n");
    scanf("%f",&rnum);      //taking input the real nummber

    int intPart = (int)rnum;        //storring the int part
    float fractPart = rnum - intPart; //storing the floating part 

    int conv = fractPart * fact;    // converting float into int

    int revInt = rev_num(intPart); // reversing the original int part
    int floatInt = rev_num(conv); // reversing the  new int part

    printf("%d.%d\n",floatInt, revInt);  //printing the result
    return 0;                            //program ends
}
