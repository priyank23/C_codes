#include<stdio.h>
/*Program to finnd max and min of three numbers */
int main()                              //main begins here
{
	int num1,num2,num3,min,max; 
	printf("Enter the numbers:");
	scanf("%d %d %d",&num1,&num2,&num3);//scanning once only
	if(num1>num2)                       //commparing num1 and num2 once only
	{
		min=num2;
	    if(num2>num3)                   //comparing num2 and num3 only once
		{
			min=num3;
			max=num1;
		}
		else
		{
			if(num1<num3)               //comparing num1 and num3 only once
			{
				max=num3;
			}
			else
				max=num1;
		}	
	}

	else                              
	{
		min=num1;
		if(num2<num3)                   //comparing num2 and num3 once as it has not been compared in the if part
		{
			max=num3;
		}
		else
		{
			if(num1<num3)              //similarly comparing num1 and num3 once
			{
				max=num2;
			}
			else
			{
				min=num3;
				max=num2;
			}
		}
	}
	printf("min=%d\t max=%d\n",min,max);//printing the result
	return 0;                           //program ends
}
	
