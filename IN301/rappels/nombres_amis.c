#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "math.h"

int div_sum(int a)
{
	int res = 0;
	int i; 

    for(i=1;i <= a/2;i++)
    {
	   if(a%i == 0)
	   {  res = res + i;}
	 }
	 
	 return res;
}

void nombres_amis(int nmax)
{
	int m;
	int n;
    int div_m;
    int div_n;
	for(m = 1; m <= nmax; m++)
	{   div_m = div_sum(m);
		for(n=m;n <= nmax; n++)
		{   
			div_n = div_sum(n); 
            if((m == div_n)&&(n == div_m))
              { printf("Les deux nombres %d et %d sont amis.\n",m,n); }
         }
    }
}
		
		
int main(int argc, char **argv)
{   
	int n = atoi(argv[1]);
	nombres_amis(n);
    	
	return 0;
}

