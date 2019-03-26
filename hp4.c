#include <stdio.h>
/*Program to print pascals triangle for n rows*/
int main()                                          //main begins here
{
    int num_rows, coeff = 1, space, loopi, loopj; 
	printf("Enter the number of rows in the triangle:")  ;
    scanf("%d",&num_rows);                          //taking input for the number of rows

    for(loopi=0; loopi<num_rows; loopi++)              
    {
        for(space=1; space <= num_rows-loopi; space++)     //printing blankspaces
            printf("  ");

        for(loopj=0; loopj<= loopi; loopj++)              //printing the  content of the triangle
        {
            if (loopj==0 || loopi==0)
			  coeff = 1;
            else 
			  coeff = coeff*(loopi-loopj+1)/loopj;
            printf("%4d", coeff);                          
        }
        printf("\n");           
    }
    return 0;
}                                                       //end of the program


