/*寻找连续因子*/
#include <stdio.h>
int max2(int a, int b)
{   if(a>b) return a;
     else 
     return b   ;
} 

int main(void)
{int x,i,n ,t,y ,a;
 int max=0  ;
 scanf("%d",&x) ;
 for(i=2 ;i<x ;i++)
{   t=0   ;
    y=x   ;
    for(n=i ; y%n==0 ; n++)
       {  y/=n  ;
          t++   ;
       }
    if(t>max) a=i  ;
    max=max2(t,max) ;
}
if(max<=1) printf("没有") ;
else{ printf("%d\n",max)  ;
     for(i=1 ; i<max ; i++)
       printf("%d*",a+i-1) ;
    printf("%d\n",a+max-1)  ;
    } 
return 0;
}


