#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "math.h"


int main()
{   
	int a,b,c,d;
	a = sizeof(char);
	b =  sizeof(int);
	c = sizeof(double);
	d = sizeof(char*);
	
	printf(" %d\n %d\n %d\n %d\n",a,b,c,d);
	a = sizeof(void*);
	b = sizeof(int*); 
	c =  sizeof(double*);
	d = sizeof(int**);
	
	printf(" %d\n %d\n %d\n %d\n",a,b,c,d);
	a = sizeof(int[10]);
	b = sizeof(char[7][3]);
	//c = sizeof(int[]);
	printf(" %d\n %d\n ",a,b);
	
	return 0;
}
