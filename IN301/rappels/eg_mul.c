#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "math.h"



int eg_mul(int a,int b)
{
	int result = 0;
	
	//int a = X;
	//int b = Y;
	
	if(a)
	{
	if(a%2 == 0)
	{ a = a/2;
	  b = b*2;
	  return (result + eg_mul(a,b));
	 }
	else
	{ a = a-1;
	  return (result + b + eg_mul(a,b)); 
	}
    }
    
    
	return result;
}

int main(int argc, char** argv)
{
     int X = atoi(argv[1]);
     int Y = atoi(argv[2]);
     int result;
     
     result = eg_mul(X,Y);
         	
	 printf("Le resultat de la multiplication %d par %d est %d.\n",X,Y,result);
	
	return 0;
}
	
	
