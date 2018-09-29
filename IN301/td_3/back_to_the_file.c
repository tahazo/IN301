#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "math.h"
#include "unistd.h"

int N;
int* T;


int number_of_int(char* filename)
{   
	FILE* Fic = NULL;
    Fic = fopen(filename,"r");
	int i = 0; 
	int a; 
	int the_end;
	the_end = fscanf(Fic,"%d",&a);
	while( the_end != EOF)
	{
		i++; 
		the_end = fscanf(Fic,"%d",&a);
	}
	return i; 
	fclose(Fic);
}

void allouer_t(char* filename)
{   
	N = number_of_int(filename);
	 
	T = (int*) malloc( N * sizeof(int));
	
	FILE* Fic = NULL;
    Fic = fopen(filename,"r");
	
	
	int i = 0;
	int a; 
	int the_end;
	
	if(Fic != NULL)
	{
	the_end = fscanf(Fic,"%d",&a);
	T[i] = a;
	while( the_end != EOF)
	{   
		i++;
		the_end = fscanf(Fic,"%d",&a);
		T[i] = a;
	}
    }
    else
    {   fclose(Fic);
		exit(EXIT_FAILURE);}
    
    fclose(Fic);
	
}

void shw_tab(int sizeoftab)
{   
	if(T != NULL)
	{
	for(int i = 0;i< sizeoftab; i++)
	{ printf("%d\n",T[i]);}
    }
    else
    {
		exit(0);
	}
} 

int i_of_max_tab(int sizeoftab)
{   
	
	if(T != NULL)
	{   int max = T[0];
		int imax = 0;
		for(int i = 1;i< sizeoftab;i++)
		{
			if(max < T[i])
			{
				imax = i;
			}
		}
		return imax;
    }
    else
    { 
		exit(0);
	}
    
}

void exchange(int* T, int sizeoftab, int a,int b)
{
	if(T != NULL)
	{
	//if(( a < sizeoftab)&&( b < sizeoftab))
	{ 
		int c = T[a];
	    T[a] = T[b];
	    T[b] = c; 
    }
    }
    else 
    {
		exit(EXIT_FAILURE);
	}
}

void exchange_k(int* T, int sizeoftab, int k)
{
	if(T != NULL)
	{
	//if( k < sizeoftab)
	{ 	
		exchange(T,sizeoftab,k,i_of_max_tab(sizeoftab));
    }
    }
    else 
    {
		exit(EXIT_FAILURE);
	}
}

void sort(int* T, int sizeoftab)
{
	if(T != NULL)
	{ 
		for(int i = sizeoftab-1; 0 < i; i--)
		{
			exchange_k(T,i+1,i);
		}
	}
	else
	{
		exit(EXIT_FAILURE);
	}
}


int main(int argc, char** argv)
{
	char* f = argv[1];
	int n = number_of_int(f);
	allouer_t(f);
	printf("%d\n",n);
	shw_tab(10);
	int imax = i_of_max_tab(50);
	printf("%d\n",imax);
	printf("_______________________________________________________\n");
	exchange(T, 20,19,0);
	shw_tab(20);
	printf("_______________________________________________________\n");
	exchange(T,20,18,19);
	exchange(T,20,15,14);
	exchange(T,20,12,13);
	exchange(T,20,9,10);
	exchange(T,20,8,7);
	exchange(T,20,6,3);
	exchange(T,20,2,1);
	shw_tab(20);
	printf("********************************************************\n");
	
	sort(T,20);
	shw_tab(20);
	
	
	free(T);
}

