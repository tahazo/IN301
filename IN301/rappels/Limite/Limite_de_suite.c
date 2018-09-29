#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "math.h"


int main(int argc, char** argv)
{
    //int pp = atoi(argv[1]);
    //int pp = 5;
    
    //float precision = (float); 
    
    double precision = 1;
    for(int i = 1; i <100; i ++){ precision = (double) precision/10;}
    double Sn1 = 1,Sn0 = 0;
    int i = 2;
    double trm = 0;
    
    while(precision < (Sn1 - Sn0)) 
    { 
         trm = (double) 1 / (i*i);
         Sn0 = Sn1;		
         Sn1 = Sn1 + trm;
         i++;
    }
    printf("%f\n",Sn1);
    FILE* Fic = NULL;
    Fic = fopen("limit.data","w");
    if ( Fic != NULL) { fprintf( Fic,"%f\n",Sn1);}
    fclose(Fic);
    return 0;
}
    
