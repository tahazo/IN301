#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "math.h"
#include "unistd.h"

int* random_tab(int sizeoftab)
{   //int* t = NULL;
	int *t = (int*) malloc(sizeoftab * sizeof(int));
	
	if( t != NULL)
    {
	int i; 
	srand(getpid());
	for(i= 0; i < sizeoftab;i++)
	{   
		t[i] = rand()%20;
	}
    }
    else
    { exit(0); }
    return t;
}

void shw_tab(int* t,int sizeoftab)
{   if(t != NULL)
	{
	for(int i = 0;i< sizeoftab; i++)
	{ printf("%d\n",t[i]);}
    }
    else
    {
		exit(0);
	}
} 

int sum_tab(int* t, int sizeoftab)
{   
	
	if(t != NULL)
	{   int sum = 0;
		for(int i = 0;i< sizeoftab;i++)
		{
			sum = sum + t[i];
		}
		return sum;
    }
    else
    { 
		exit(0);
	}
    
}

int min_tab(int* t, int sizeoftab)
{   
	
	if(t != NULL)
	{   int min = t[0];
		for(int i = 1;i< sizeoftab;i++)
		{
			if(t[i]< min)
			{
				min = t[i];
			}
		}
		return min;
    }
    else
    { 
		exit(0);
	}
    
}

void decale_tab(int* t,int sizeoftab)
{   if(t != NULL)
	{
	int a = t[0];
	int b;
	for(int i = 1;i< sizeoftab; i++)
	{   b = t[i];
		t[i] = a;
		a = b;
		}
    }
    else
    {
		exit(0);
	}
} 

int* random_tab2(int sizeoftab)
{   //int* t = NULL;
	int *t = (int*) malloc(sizeoftab * sizeof(int));
	
	if( t != NULL)
    {
	int i; 
	srand(getpid());
	t[0] = rand()%10;
	for(i= 1; i < sizeoftab;i++)
	{   
		t[i] = t[i-1] + rand()%10;
	}
    }
    else
    { exit(0); }
    return t;
}

void insert(int* t,int sizeoftab, int a)
{   
	int i = 0;
	while(t[i] <= a)
	{ i++;}
	decale_tab((t+i),sizeoftab-i);
	t[i] = a;
}

void reverse(int* t,int sizeoftab)
{
	int i = 0;
	int j = sizeoftab -1;
	int value_holder;
	
	while(i < j)
	{   value_holder = t[i];
		t[i] = t[j];
		t[j] = value_holder;
	    i++;
	    j--;
	} 
		
}

int random_i(int sizeoftab)
{
	return rand()%sizeoftab;
}

void supp( int* t, int sizeoftab)
{
	int i = random_i(10);
	reverse(t,10);
	decale_tab(t, 10 - i);
	reverse(t,10);
}

	
int main(int argc, char** argv)
{
	int* t = random_tab(10);
	int* t2 = random_tab2(10);
	shw_tab(t, 10); 
	printf("La somme des valeurs du tableau est %d.\n", sum_tab(t,10));
	printf("Le minimum du tableau est %d.\n", min_tab(t,10));
	decale_tab(t,10);
	shw_tab(t, 10); 
	free(t);
	
	printf("_________________________________________________________\n");
	
	shw_tab(t2,10);
	
	printf("_________________________________________________________\n");
	
	insert(t2,10,22);
	shw_tab(t2,10);
	
	printf("*********************************************************\n");
	
	reverse(t2,10);
	shw_tab(t2,10);
	
	printf("_________________________________________________________\n");
	
	supp(t2,10);
	shw_tab(t2,10);
	
	free(t2);
	return 0;
}
