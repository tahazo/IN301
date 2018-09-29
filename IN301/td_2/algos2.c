#include "constantes.h" 
#include "stdio.h"
#include "stdlib.h"

int T[N];


void lecture(FILE* Fic)
{   
	int i=0;
	int a;
	int end;
	 
	while( i < N)
	{ 
	  end = fscanf(Fic,"%d\n",&a);
	  if(end != EOF)
	  {
	  T[i] = a;	}
	  else
	  {
	  fclose(Fic); }
	  
	}
		
}

int main()
{  int a = 0;
	
   FILE* Fic = NULL;
   Fic = fopen(NOMFIC,"r");
   lecture(Fic);
   a = T[N/2 + 6];
   printf(" %d ",a);
   return 0;
}
