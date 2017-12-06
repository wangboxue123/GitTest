/*读出整数*/
#include <stdio.h>
void pingyin(int x)
{
switch(x) {
case 0 : printf("零") ; break ;
case 1 : printf ("一") ; break ;
case 2 : printf ("二") ; break ;
case 3 : printf ("三") ; break ;
case 4 : printf ("四") ; break ;
case 5 : printf ("五") ; break ;
case 6 : printf ("六") ; break ;
case 7 : printf ("七") ; break ;
case 8 : printf ("八") ; break ;
case 9 : printf ("九") ; break ;
         }
}
int weishu(int a )
{   
    int n=0     ;
    do{
        a=a/10  ;
        n++     ;
    }while(a!=0);
     return n   ;
} 


int main(void)
{
int x,i ;
printf("请输入一个整数:") ;
scanf("%d",&x) ;
int n=weishu(x) ;
int s[n+1]     ;
s[n+1]=1    ;
int j,y      ;
int t=1     ;
int k=0     ;
for(i=0 ; i<=n ; i++) {
    s[i]=x%10 ;
    x/=10   ;
}
for(i=n-1 ; i>=0 ; i--){
   if(i%8==3) printf("万")  ;
   if(t*(s[i]+s[i+1])>0)    pingyin(s[i])  ;
   if(s[i]!=0){ switch(i%4){
                   case 0 : break ;
                   case 1 : printf("十") ;  break ;
                   case 2 : printf("百") ; break ;
                  case 3 : printf("千") ; break ;
                   } 
             }
  if(i>4) {j=4 ; k=1 ; }
  else { j=0  ;
       if(k==1) {k=0 ; t=1 ;}
       }
  for(y=0 ; j<i ; j++)
    y+=s[j] ;
  if(y==0) t=-1 ;
 }
return 0  ;
}
