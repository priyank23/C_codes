#include<stdio.h>
#include<math.h>
/*program to find the root of equation x - sin x =0 */
float fun(float x)            //function to calculate the value of the function
{
	return x-sin(x);
}
float derFun(float x)         //function to calculate the derivate of the function
{
	return 1-cos(x);
}
void newRaph(float x)         //function to find the root
{
	float h;
    do
    {
        h = fun(x)/derFun(x);       
        x = x - h;
    	printf("%f\n",x);
    	if(h<0)
    		h=-h;
    } 
    while (h >= 0.001);
	printf("\nvalue of root is %f",x);
}
int main()                   //main begins here
{
	float num=10;
	newRaph(num);            //finding the function
	printf("\n");
	return 0;                //program ends here
}
