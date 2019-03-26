#include <stdio.h>
#include<stdlib.h>
/*program to convert decimal to roman numerals*/
int main(void) {

   int number;
   printf("enter the number to be converted:");
  scanf("%d",&number);             //taking the decimal as input

      if (number > 9999) printf("ERROR");      //its a program for decimals less than 10000

      else {                                //this else is for printing the roman numerals in proper order by comparing  it with different numbers
          printf("%4d" " is ", number);
	  if (number >= 9000) {
		printf("MK");                        //9000=MK assuming K for 10000
		number = number - 9000;
		};
          if (number >= 5000) {
		printf("N");
		 number = number - 5000;
		};
	  if (number >= 4000) {
		printf("MN");
		number = number - 4000;
		};
          while (number >= 1000) {
		printf("M");
		 number = number - 1000;
		};
	  if (number >= 900) {
		printf("CM");
		number = number - 900;
		};
          if (number >= 500)	{
		printf("D");
		 number = number - 500;
		};
	  if (number >= 400)  {
		printf("CD");
		number = number - 400;
		};
          while (number >= 100) {
		printf("C");
		 number = number - 100;
		};
	  if (number >= 90) {
		printf("XC");
		number = number - 90;
		};
          if (number >= 50) {
		printf("L");
		number = number - 50;
		};
	  if (number >= 40) {
		printf("XL");
		number = number - 40;
		};
          while (number >= 10) {
		printf("X");
		number = number - 10;
		};
	  if (number >= 9) {
		printf("IX");
		number = number - 9;
		};
          if (number >= 5) {
		printf("V");
		number = number - 5;
		};
          if (number >= 4)
		 {printf("IV");
		 number = number - 4;
		};
          while (number >= 1) {
		printf("I");
		number = number - 1;
		};
	 printf (" in Roman.");
	 }

      printf("\n");

  return 0;                         //end of the program

}
