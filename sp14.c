#include<stdio.h>
/*Program to convert decimal into binary*/
int main()                         //main function begins here
{
	int num,bin[32];                  
	printf("Enter the number:");
	scanf("%d",&num);              //number is taken
	int temp=num,dig=32;
	while(temp!=0)                //extracting binary digits
	{
		dig--;
		bin[dig]=temp%2;    
		temp=temp/2;
	}
	int j;
	printf("\nThe binary equivalent of the given number is:");
	for(j=dig;j<32;j++)           //printing the binary number
		printf("%d",bin[j]);
	printf("\n");
	return 0;                     //program ends here
} 
