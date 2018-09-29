#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "math.h"

int prime_test(int n)
{
	int r = 1,i;
	
	for(i = 2; i <= sqrt(n);i++)
	{ if(n%i == 0)
		{  r = 0; }
	}
	return r;
}

int main(int argc, char **argv)
{   
    int r = prime_test(atoi(argv[1]));
    
    if( r == 1)
    {printf("is prime");}
    else
    {printf("is not prime");}
    
	
	return 0;
}

