#include<stdio.h>
/*program to find the accuracy of sum of reciprocal of given number*/
int main()                    //main starts here
{
	float sum=0.0,num,reci;
	int i;
	printf("Enter the number:"); 
	scanf("%f",&num);           //input is taken
	for(i=0;i<num;i++)          //loop to find the sum
	{
		reci=1/num;
		sum=sum+reci;
	}
	float acc=(sum-1)*100;     //accuracy is calculated
	printf("\nThe sum of 1/%.0f %.0f times is %f\n",num,num,sum);
	printf("The accuracy is %f percent",acc);
	return 0;                 //program ends here
}
