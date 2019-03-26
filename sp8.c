#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.1415926
/*Program to print trigonometric ratios */
int main()
{
	int deg,i;
	float rad,term,sum;
	printf(" x\t  mySin(x)\t   sin(x)\t   Cos(x)\t   Tan(x)\n");
	for (deg = 0; deg <=360; deg+=15)
	{
		rad=deg*PI/180;     //converting degrees to radians
		sum=0;              //mysin sum is added in this
		i=1;                //defines the ith position 
		term=rad;
		sum+=term;
		while(term>=0.0001 || term<=-0.0001)        //setting the limit to add up
		{
			i++;
			term=-rad*rad*term/((2*i-2)*(2*i-1));    //terms of sin series at ith position
			sum+=term;                              //adding the terms to find mysin
		}
		printf("%3d\t%9.6f\t%9.6f\t%9.6f\t%9.6f\n",deg,sum,sin(rad),cos(rad),tan(rad));//calling sin,cos and tan function from math.h header file
	}
}
