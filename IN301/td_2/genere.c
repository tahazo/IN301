#include "constantes.h" 
#include "stdio.h"
#include "stdlib.h"



void ecrire(int i,int a, FILE* Fic)
{ 
  if( i == 0) 
     {  
		
		
		if( Fic != NULL)
		    { fprintf(Fic,"%6d \n", a); }
	 }
	 
	 
  else if ( Fic != NULL )
  {  
	  
	  if( i == (N-1))
            { fprintf(Fic,"%6d \n", a);
		        fclose(Fic); } 
		 
		 
	  else 
	        { fprintf(Fic,"%6d \n", a); }
	}
}

int main()
{   
	FILE* Fic = NULL;
	Fic = fopen(NOMFIC,"w");
	
    int a,i;
    
    for( i = 0; i < N; i++)
    { 
        a = rand()%MAX; 
        ecrire(i,a,Fic);
    }      
return 0;
}
