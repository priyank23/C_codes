#include<stdio.h>
#include<math.h>
#define pi 3.141592654
/*program to draw sine and cosine graphs*/
int main()
{
	float sinx=0.0,ans,cosx=0.0;
	int ans2;
	int i,j;
	for(i=10;i>=-10;i--)            //loop to define the extent of the graph  
	{
		for(j=0;j<=360;j+=10)       //loop to define the graph
		{
			float rad=(j*pi)/180;   //converting angle to radian
			sinx=sin(rad);
			ans=sinx*10;
			ans2=(int)(ans);
			if(ans2==i)
				printf("s");
			else
				printf(" ");
			if(i==0)
				printf("-");
			cosx=cos(rad);
			ans=cosx*10;
			ans2=(int)(ans);
			if(ans2==i)
				printf("c");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;                       //program ends here
}
