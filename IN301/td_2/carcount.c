#include "stdio.h"
#include "stdlib.h"

int main()
{   char filename[200]; 
	
	scanf("%s",filename);
	
	FILE* f = fopen("filename","r");
	
	int count = 0;
	char currentchar;
	if( f != NULL)
	{  while( currentchar != EOF) 
		{ currentchar = fgetc(f);
		  if( currentchar != EOF)
		  {  count++; }
		 }
	}
	
	return count;
}
