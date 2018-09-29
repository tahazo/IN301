#include "constantes.h" 
#include "stdio.h"
#include "stdlib.h"

int T[N];


void lecture(FILE* Fic)
{   
	int i;
	int a;
	 
	for( i = 0; i < N; i++)
	{ 
	  fscanf(Fic,"%d\n",&a);
	  T[i] = a;	
	  
	 }
	fclose(Fic);	
}

int recherche(int a)
{ 
	int i,comp =0,tf;
	
	for(i =0; i< N;i++)
	{  while(!tf)
		{ 
		comp++;
		if( T[i] == a ){ tf = 1;}  
		}
	   }
	
	printf("%d",comp);
	
	return tf;
}	

int stat_recherche(int a)
{ 
	int i,comp =0,tf=0;
	
	for(i =0; i< N;i++)
	{  if(!tf)
		{ 
		comp++;
		if( T[i] == a ){ tf = 1;}  
		}
	   }
	
	return comp;
}	

double calc_m(double m, int comp)
{
	double c = m + ((double)comp)/10000;
	return c;
}


int main()
{  int a,comp;
   int i;
   double m = 0;
	
   FILE* Fic = NULL;
   Fic = fopen(NOMFIC,"r");
   lecture(Fic);
   
   for(i = 0; i < N; i++)
   {  a = rand()%(5*MAX);
	  comp = stat_recherche(a);
	  m = calc_m(m,comp);
    }
   printf("%f",m);
   return 0;
}
