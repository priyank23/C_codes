#include<stdio.h>
#include<string.h>
/*program to convert decimals into words*/
char* word1(int dig)        //word for hundredth position
{
    if(dig==1)
        return "one";
    else if(dig==2)
        return "two";
    else if(dig==3)
        return "three";
    else if(dig==4)
        return "four";
    else if(dig==5)
        return "five";
    else if(dig==6)
        return "six";
    else if(dig==7)
        return "seven";
    else if(dig==8)
        return "eight";
    else if(dig==9)
        return "nine";
    return "";
        }
char* word2(int dig)        //word for tenth & ones place
{
    if(dig==2)
        return "twenty";
    else if(dig==3)
        return "thirty";
    else if(dig==4)
        return "forty";
    else if(dig==5)
        return "fifty";
    else if(dig==6)
        return "sixty";
    else if(dig==7)
        return "seventy";
    else if(dig==8)
        return "eighty";
    else if(dig==9)
        return "ninety";
    return "";
        }
char* word3(int dig)        //word for writing 10-19
{
    if(dig==1)
        return "eleven";
    else if(dig==2)
        return "twelve";
    else if(dig==3)
        return "thirteen";
    else if(dig==4)
        return "fourteen";
    else if(dig==5)
        return "fifteen";
    else if(dig==6)
        return "sixteen";
    else if(dig==7)
        return "seventeen";
    else if(dig==8)
        return "eighteen";
    else if(dig==9)
        return "nineteen";
    return "ten";
        }
int main()                   //main function begins here
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);        
    int first,second,third;  
    char firstWord[6],secondWord[10],thirdWord[6]; //string to store words
    if(num>=1 && num<1000)   //program is for numbers less than 1000
    {
        first=num/100;       //digit at hundredth place is extracted
        third=num%10;        //digit at the ones place is extracted
        second=(num%100-third)/10;  //digit at the second place is extracted
        strcpy(firstWord,word1(first));
        if(second==1)
        {     strcpy(secondWord,word3(third));
              strcpy(thirdWord," ");
        }
         else
         {
             strcpy(thirdWord,word1(third));
             strcpy(secondWord,word2(second));
        }
        if(num>=100)
        {    printf("\n%s",firstWord);
             printf(" hundred %s",secondWord);
             printf(" %s",thirdWord);
        }
        else
        {   printf("\n%s",secondWord);
             printf(" %s",thirdWord);
        }
    
    }
    printf("\n");
    return 0;          //program ends
}
