#include"stdio.h"
#include"stdlib.h"
#include"string.h"	
#include"wx_yin.h"															   
#include"maoao.h"	

#define JH_SHUZU_COUNT 100	 
enum franch{
   wo ,
   ai ,
   bei ,
   jing ,
   tian ,
   an ,
   men 
}; 

typedef struct math{
   int move ;
   char d_move ;
   float q_move ;
}math_0 ;



typedef math_0 xiao_hui ;

int eng[]={0} ;	    //数组或者枚举类型等在最后一个元素末尾加“，”不报错，可能是编译器问题
char* ing ; 

int main()
{
   int i;
   int rcv;

   for(i=0;i<100;i++)
   {
      while(JH_SHUZU_COUNT-i)
	  {
	     *(ing ++)= eng[10-i] ;
		 if(i == 99)			   
		 {
		    if(0 == strcmp(ing , (char*)eng));   
			   break;
			 
		 }
	  
	  }
   
   }

   rcv = zhhuan((int*)ing , (int*)eng);
   if(rcv == 1)
      return 1;

}



