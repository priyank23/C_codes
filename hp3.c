#include<stdio.h>
#include<math.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#define PI 3.1415926
#define g 9.81
/*Program to create angry birds game*/
float modder(float val)   
{
	return val>0?val:-1*val;
}
int main(void){
	
	int velocity;float angle,hit=0;
	float height,f_row,rooti,rootj;
	int i_col,pigpos,i_col_lim;
	float d,f_extent,ini;
	f_row=0;i_col=0;
	srand (time(NULL));
	height=rand()%20;            
	pigpos=rand()%100;
	printf("The bird is at height %fm\n, and a pig is %dm away from the bottom of cliff\n. Enter speed:\n",height,pigpos);
	scanf("%d",&velocity);
	printf("Enter Angle:\n");
	scanf("%f",&angle);
	angle*=PI/180;
	f_extent=25;
	float h,r;
	h=modder(velocity*sin(angle));
	h*=h/(2*g);
	
	if(h<height){
		printf("You lose");
		return 0;
	}	
	r=modder(velocity*velocity*sin(2*angle))/g;
	
	
	i_col_lim=pigpos>r?pigpos:r;
	ini=(tan(angle)+sqrt(tan(angle)*tan(angle)-(4*g*(height))/(2*velocity*velocity*cos(angle)*cos(angle))))/(g/(velocity*velocity*cos(angle)*cos(angle)));
	while(f_row<(h+1))
	{
		i_col=ini;
		while(i_col<(i_col_lim+4)){
			d=tan(angle)*tan(angle)-(4*g*(h-f_row))/(2*velocity*velocity*cos(angle)*cos(angle));
			if(d>0){
				rooti=(tan(angle)+sqrt(d))/(g/(velocity*velocity*cos(angle)*cos(angle)));
				rootj=(tan(angle)-sqrt(d))/(g/(velocity*velocity*cos(angle)*cos(angle)));
			}
			else{
				rooti=-1;
				rootj=-1;
			}

			if(f_row==((int)h+1) && i_col==pigpos){
				printf("%c",219);
				break;
			}
			else if((modder(f_extent*(rooti-i_col))<15) || (modder(f_extent*(rootj-i_col))<15) ){
				printf("*");
			}
			else {
				printf(" ");
			}
			i_col++;
		}
		printf("\n");
		f_row++;
		sleep(1);
		}
		if(modder(((tan(angle)-sqrt(tan(angle)*tan(angle)-(4*g*(0))/(2*velocity*velocity*cos(angle)*cos(angle))))/(g/(velocity*velocity*cos(angle)*cos(angle))))-pigpos)<2 || modder(((tan(angle)+sqrt(tan(angle)*tan(angle)-(4*g*(0))/(2*velocity*velocity*cos(angle)*cos(angle))))/(g/(velocity*velocity*cos(angle)*cos(angle))))-pigpos)<2) printf("You win\n");
		else printf("You lose\n");
}

