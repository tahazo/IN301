#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "unistd.h"
#include "math.h"


void syracruse(int u0,int* it)
{  
	printf("%d\n",u0);	
	int b = *it;
	if( 1 < u0)
	{ 
	(*it) = b + 1;
	if((u0)% 2 == 0)   { syracruse((u0)/2,it); }
	else       { syracruse(3*(u0) +1,it); }
    }
    else  (*it) = b + 1 ;
	
}

int main(int argc, char **argv)
{
	int u0 = atoi(argv[1]);
	//srand(getpid());
	//int u0 = rand()%1000;
	int* it = NULL;
	int a;
	it = &a;
	*it = 0;
	syracruse(u0,it);
	
	printf("Le nombres d'interations est %d.\n",*it);
	
	return 0;
}

