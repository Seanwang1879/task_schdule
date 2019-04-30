#include"stdio.h"

int* maopao(int* list)
{
   int i ;
   int j ;
   int lenth ;
   int buff[] = {0} ;
   //int buff_1[] = {0} ;
   int* buff_2;
   lenth = sizeof(list) ;    
   for(i=0 ; i<lenth ; i++)
      buff[i] = *(list+i) ;

   //&buff = list ;
   for(i=0 ;i<lenth ;i++ )
   {
      for(j=0 ;j<lenth-j ; j++)
	  {
	  	/* if(buff[lenth-j]>=buff[lenth-j-1])
		 {
		    *buff_2 = *(list+(lenth-j)) ;
			buff[lenth-j] = buff[lenth-j-1] ;
			buff[lenth-j-1] = *buff_2 ;  
	  	 }*/
	  
	     if(buff[lenth-j]>=buff[lenth-j-1])
		 {
		    *buff_2 = buff[lenth-j] ;
			buff[lenth-j] = buff[lenth-j-1] ;
			buff[lenth-j-1] = *buff_2 ;  
	  	 }
      

	  }  
   
   }
   //list = &buff ;
   for(i=0 ; i<lenth ; i++)
      *(list+i) = buff[i] ;
   return(list) ;



}
