#include <stdio.h>
#include <stdlib.h>
/*Program to read from a file and convert every uppercase characters to lowercase annd vice versa and print it another file*/
int main()
{
	FILE *fin=fopen("input.txt","r");       //taking input from input.txt file
	FILE *fout=fopen("output.txt","w");     //to be written in output.txt
	int ch;
	do
	{
		ch=fgetc(fin);                      //taking the ascii value of the characters in the file 
		if(ch>=65 && ch<=90)
		{
			ch=ch+32;                      //upper case -> lower case
		}
		else if(ch>=97 && ch<=122)
		{
			ch=ch-32;                      //lower case -> upper case
		}
		if(feof(fin))                      //if we've reached end of the file then break
			break;
		fprintf(fout, "%c",ch);               //printing the result
	}while(1);
	fclose(fout);
	fclose(fin);
	return 0;
}
