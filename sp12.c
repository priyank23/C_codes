#include<stdio.h>
/*program to factorize a number and find its factors*/
int factor(int num)                //function to exctract factors
{
	int i;
	for(i=2;i<=num/2;i++)         
	{
		if(num%i==0)
			return i;
	}
	return num;
}
int main()                         //main function begins
{
	int num;
	printf("enter the number:");    
	scanf("%d",&num);
	int fact,temp;
	temp=num;
	while(temp!=1)                 //loop to factorize the number  
	{
		fact=factor(temp);         //function factor is called here
		if(fact==num)              //to check whether the number is prime or not
		{
			printf("The number %d is prime\n",num);
			break;
		}
		printf(" %d ",fact);
		temp=temp/fact;
		if(temp!=1)printf("X");
	}
	printf("\nThe factors of %d are: ",num);   //factors are again found here
	int i;
	for(i=1;i<=num/2;i++)                      
	{
		if(num%i==0)
			printf("%d ",i);
	}
	printf("\n");
	return 0;                                  //program ends
}
