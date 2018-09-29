#include "unistd.h"
#include "stdio.h"
#include "stdlib.h"

int main()
{ 
	int a,i;
	srand(getpid());
	for(i = 0;i<10000;i++)
	{ // a = alea_int(1000);
		a = rand()%1000; 	
		printf("%d\n",a);
	}
   return 0;
} 
