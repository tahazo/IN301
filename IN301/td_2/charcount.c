#include "stdio.h"
#include "stdlib.h"

int main(int argc, char** argv)
{   
	//char filename[200]=""; 
	
	
	// scanf("%s", filename);
	
	
	FILE* f;
	f = fopen(argv[1],"r");
	
	int count = 0;
	char currentchar;
	if( f != NULL)
	{  while( currentchar != EOF) 
		{ currentchar = fgetc(f);
		  if( currentchar != EOF)
		  {  count++; }
		 }
	}
	printf("%d",count);
	
	return 0;
}
