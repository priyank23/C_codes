#include<stdio.h>
/*program to extract digits of a number*/
int main()                    //main begins here
{
	int num;
	scanf("%d",&num);         //taking input
	printf("The digits are:");
	while(num>0)              //extracting digits
	{
		printf("%d\t",num%10);
		num/=10;
	}
	return 0;                 //end of the program
}
