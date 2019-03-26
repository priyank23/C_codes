#include<stdio.h>
/*program to find max and min of 4 numbers*/
int main()                                    //main begins here
{
	int num1,num2,num3,num4;
	scanf("%d%d%d%d",&num1,&num2,&num3,&num4);//taking input
		int max,min;
	    max=(num1>num2)?num1:num2;            //finding max
		max=(max>num3)?max:num3;
		max=(max>num4)?max:num4;
	    min=(num1>num2)?num2:num1;            //finding min
		min=(min>num3)?num3:min;
		min=(max>num4)?num4:min;
		printf("max=%d\n",max);               //printing result
		printf("min=%d\n",min);
		return 0;                             //program ends here
}
