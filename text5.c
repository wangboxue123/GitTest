
/*打出沙漏*/
#include <stdio.h>
int main(void)
{int  i,j ,x,y  ;
char ch[1] ;
scanf("%d",&x) ;
scanf("%s",ch) ;
for(i=1 ; i*i*2<x ; i++)
   y=i ;
 for(i=1 ; i<=y ; i++)
{  for(j=1 ; j<=y*2-i ; j++ )
     { if(j>=i) printf("%s",ch);
       else printf(" ") ;
      }
   printf("\n") ;
}
y=y      ;
for(i=2 ; i<=y ; i++)
{  for(j=1 ; j<=y+i-1 ; j++)
     {if(j>=y-i+1) printf("%s",ch);
      else printf(" ")  ;
     }
    printf("\n") ;
}
printf("%d",x-y*y*2) ;
    return 0   ;
}



