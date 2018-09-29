#include "stdio.h"
#include "stdlib.h"
#include "orthoheure.h"
#include "string.h"
#include "math.h"

int string_to_int(char w_number[])
{   
	// function is useless
	int length = strlen(w_number);
	int i;
	int number = 0;
	for(i = 0; i < length; i++){ number = number + ((w_number[i])*(10^(length-1-i)));}
	// THE MISTAKE : if w_number(5) is char '8' then w_number(5) != 8; ( maybe it's in ASCII code ?? )  
	return number;
}

int main(int argc, char** argv)
{
	//int s_init = string_to_int(argv[1]);
	
	int s_init = atoi(argv[1]);
	
	int s0 = s_init;
	
	char H[10] = "heure";
	char M[10] = "minute";
	char S[10] = "seconde";
	char S0[10] = "seconde";
	
	int h,m,s;
	
	h = s_init/3600;
	
	s_init = s_init - h*3600;
	
	m = s_init/60;
	
	s_init = s_init - m*60; 
	
	s = s_init;
	
	if(!((h==0)||(h==1))){ H[5] ='s';}
	if(!((m==0)||(m==1))){ M[6] ='s';}
	if(!((s==0)||(s==1))){ S[7] ='s';}
	if(!((s0==0)||(s0==1))){S0[7] ='s';}
	
	printf("%d %s correspond à %d %s %d %s %d %s",s0,S0,h,H,m,M,s,S);
	
	return 0;
}
