#include <stdio.h>
//Program to print A X B X C by using only one for loop and only one print statement
int main()  //main begins here
{
    int x;//integers in A
    int y;//integers in B
    int z;//integers in C

    // A = {1,2,3,4,5} , B = {1,2,3} , C = {1,2,3,4}
    for(x=1, y=1, z=1; x<6, z<5, y<4;x++,(x==6)?x=1,z++,((z==5)?z=1,y++:1):1)//one for loop
    {   //first A in increasing order then C and then B
        printf("(%d , %d , %d)\n",x ,y, z);                                //one print statement
    }
    return 0;    //program ends
}
