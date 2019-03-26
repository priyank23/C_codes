#include<stdio.h>
/*Program to find the sum and average of four numbers*/
int main()                         //main begins here
{
	int loopi,num,sum_avg=0;       
	printf("Enter the numbers:\n");
	for( loopi=0;loopi<4;loopi++)   //loop to take input and adding it 
	{
		scanf("%d",&num);
		sum_avg+=num;                //only one variable is used to find the sum and average both
	}
	printf("sum =%d average=%d\n",sum_avg,sum_avg/4);//printing the result
	return 0;
}

