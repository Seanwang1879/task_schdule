#include"stdio.h"

int zhhuan(int* a , int* b)
{
   int *c ;	
   														 
   c = a ;
   a = b ;
   b = c ;

   return 1 ;
}
