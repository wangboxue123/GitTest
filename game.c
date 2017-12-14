#include <stdio.h>
#include <math.h>
#include <string.h>
/*读出整数*/
void duchu(int x){switch(x) {
case 0 : printf("零") ; break ;case 1 : printf ("一") ; break ;case 2 : printf ("二") ; break ;case 3 : printf ("三") ; break ;
case 4 : printf ("四") ; break ;case 5 : printf ("五") ; break ;case 6 : printf ("六") ; break ;case 7 : printf ("七") ; break ;
case 8 : printf ("八") ; break ;case 9 : printf ("九") ; break ;         }}
int weishu(int a )
{    int n=0     ;    do{     a=a/10  ;     n++     ;    }while(a!=0);     return n   ;} 
void duchu2(int x){int i ;int n=weishu(x) ;int s[n+1]     ;s[n+1]=1    ;int j,y      ;int t=1     ;int k=0     ;
for(i=0 ; i<=n ; i++) {    s[i]=x%10 ;    x/=10   ;}
for(i=n-1 ; i>=0 ; i--){   if(i%8==3) printf("万")  ;   if(t*(s[i]+s[i+1])>0)    duchu(s[i])  ;
   if(s[i]!=0){ switch(i%4){    case 0 : break ;         case 1 : printf("十") ;  break ;
                case 2 : printf("百") ; break ;          case 3 : printf("千") ; break ;          }   }
  if(i>4) {j=4 ; k=1 ; }  else { j=0  ; if(k==1) {k=0 ; t=1 ;}}  for(y=0 ; j<i ; j++)   y+=s[j] ;  if(y==0) t=-1 ;}}

/*建立结构体*/

typedef  struct{ int x ; int y ; int h  ;}   point  ;
typedef  struct{    char name[32]  ;     int  blood    ;     int  fight    ;     int  energy   ;
     point z   ;    int  n  ; int b[5] ; }  hero   ;

void shop(hero *a){ hero b=*a ;int c=99 ;
 printf("\n美女……1￥……1\n回血丹……2￥……2\n王博学……3￥……3\n葵花宝典………… 4\n商店的秘密……10￥……5\n退出…………0\n   ") ;
 while(c!=0){ printf("金钱=%d",b.b[4] ) ;scanf("%d",&c) ;
switch (c){ case 1 :printf("她是警方派的扫黄警员，您因为涉黄被逮捕到了监狱，"); (*a).b[5]=0 ;(*a).z.x=0 ;(*a).z.y=13 ;
printf("但你在监狱知道了在100，100有游戏通关的密令。然后越狱成功。") ; break ;
   case 2 :(*a).b[4]-=2 ; (*a).b[0]++ ; break ;
   case 3 :(*a).b[4]-=3 ; (*a).b[2]++ ; break ;
   case 4 :(*a).b[4]-=4 ; (*a).b[3]++ ; break ; 
   case 5 :(*a).b[4]-=10; printf("大写的n是可以修改登记的但需要密令") ; break ;}
if((*a).b[4]<0){ (*a).blood+=20*(*a).b[4] ;printf("您因为不交钱被店员打伤") ;}
}}

/*特殊事件*/
void teshu(hero *a,int *l ,int day)
{hero b=*a ;int d=day ; int ss ;
if(d==2)printf("\n其实wasd在很多游戏里表示上下左右,哎这里有个地图,但是咋打开呢 \n") ;
 if(d==3) printf("\n回到原点，才能想起来前进目的\n") ;
 if(d>5 && b.n==0) {printf("\n没有目的，就没有未来\n") ; (*a).energy-=10 ;}
if((b.z.x+b.z.y+b.n==0 && d>1  )){(*a).n=1 ; printf(" \n目的是不存在的，就像函数y=sqr(x-4)+sqr(4-x)+3一样，没有意义 \n ") ;}
if(b.z.x==4 && b.z.y==3 && (*a).n==1) {printf("\n你遇到一人，他说'我是未来的你,如果你想找到所谓的目的，") ;
printf("就去距离原点为…………'然后他就死了\n") ;(*a).n=2 ;  }
if(b.z.x==3 && b.z.y==4 && b.n==2 ) {*l=300 ; printf("\n 活在三维里实在太累，不受维度限制,只要你去过，你就可以回到那里\n");
    printf("\n当时间超越你的血肉，就可以将你与时间相连\n") ; (*a).n=3 ;}
if(b.blood<=d && b.n==3 ){ (*a).n=4   ; printf("\n人生的目的在于高度而不是远度,\n") ;} 
if(d==15)printf("\n其实输入p可以打开地图,回到过去必将引发宇宙悖论，所以你会掉血\n") ;
 if(b.z.x-b.z.y>7 && b.n==4 ){ printf("\n没到6级不要离开围棋盘\n")  ;(*a).n=5 ;}
if(d==25) {printf("\n 血不够厚别去13，13   \n"); }
if (b.z.x-b.z.y>8 || b.z.y-b.z.x>8) printf("\nx和y，其实与怪物的血量与攻击有关\n") ;
if(b.z.x-b.z.y>10 || b.z.y-b.z.x>10) { printf("\n一味追求高度或远度，必定走不远\n") ; (*a).blood-=25 ;}
if(b.z.x==11 && b.z.y==11) {if(b.b[4]=0) printf("\n没钱滚蛋\n"); else{printf("\n先生您好，您要买点啥\n") ;shop(&(*a)); }}
if(b.z.x*b.z.y==169 && b.n==5 ) {(*a).blood-=300 ;(*a).fight*=2 ;(*a).n=6 ;}
if(d==20){printf("商店正在双十一促销，你不去看看") ;}
if(d==10)printf("英国的黄金很有用，其实除了wasd还有很多隐藏按键，但是有的会让你直接死亡 ") ;
if(b.n<6 &&(b.z.x>19 || b.z.y>19)){printf("战斗等级只有5的棋子，不能走出棋盘");(*a).blood-=30 ;}
}

/*fingting and getsomething 执行战斗结算*/
int jianxie(hero a,int b){int c  ;if (b=0) c=((10*a.z.y+30)/a.fight-1)*(a.z.x+3) *2  ; else  c=((4*a.z.y+15)/a.fight-1)*(a.z.x+2)  ;
if(c>0) return c  ;else return 0  ;
}


void zhixing2(hero *a,int b[5],int c[100][100]  ) {hero d= *a  ;int x=c[d.z.x][d.z.y]  ;
if(x%35==0) b[0]=1 ;if(x%4==0)  b[1]=1 ;if(x%2==0)  b[2]=1 ;if(x%5==0)  b[3]=1 ;if(x%7==0)  b[4]=1 ;

int t  ;  int r=0   ;
if(b[0]){ t=0 ; r+=jianxie(d,t); printf("您刚刚和boss发生了关系\n") ;(*a).b[4]+=5 ;   }
if(b[1]){ t=1 ; r+=jianxie(d,t); printf("您刚刚打死一只小怪\n") ;(*a).b[4]++ ; }  (*a).blood-=r ; 
if(b[2]) {(*a).energy+=3   ; printf("您捡到一个体力瓶\n")  ;}
if(b[3]) { (*a).fight+=1  ;  printf("您捡到一把小刀\n")  ; }
if(b[4]) { (*a).energy+=5 ; (*a).fight+=6 ; (*a).b[r%5]++ ; printf("您发现一个宝箱\n") ; }
}

/*xianshi显示*/
void xianshi1(point a){printf("(%d,%d)",a.x,a.y)  ;}

void xianshi2(hero a)
{
printf("\n\n\n英雄:%s\n",a.name)  ;printf("等级%d\n",a.n)  ;printf("血量:%d\n",a.blood)  ;
printf("攻击力%d\n",a.fight)  ;printf("体力%d\n",a.energy)  ;printf("所在地点:")   ;
xianshi1(a.z)  ;printf("\n")  ;
}

void tishi(void){
printf("查看英雄状况……1\n行动……2\n查看周围状况……3\n退出游戏……0\n")  ;
}

/*移动*/
void move(hero *a){
int c ;
printf("        上……1\n左……3         右……4\n       下……2 ") ;
scanf("%d",&c)  ;
switch(c)  {
case 1 : (*a).z.y+=1  ; break ;
case 2 : if((*a).z.y>0) (*a).z.y-=1  ; else printf("您撞墙了\n") ;  break ;
case 3 : if((*a).z.x>0) (*a).z.x-=1  ; else printf("您撞墙了\n") ;  break ;
case 4 : (*a).z.x++   ; break ;
           }
}

/*watch显示地图*/
void bian(int*a){if(*a>=0) *a-=420 ;}
int xianship2(int a){ if(a>=0) return 0; else {if(a%35==0) return 1 ; else {if(a%4==0) return 2 ;else return 3 ;}} }
void xianship(hero a,int c[100][100]){int xx,yy,i,j,t ;xx=0 ;yy=10;if(a.z.x>5) xx=a.z.x-5 ;if(a.z.y>5) yy=a.z.y+5 ;
for(i=0 ; i<11 ; i++){
   for(j=0 ; j<11 ; j++){if(xx+j==a.z.x && yy==a.z.y+i) printf(" 我 ") ;else{ 
 t=xianship2(c[xx+j][yy-i]) ; switch (t) {case 0 :   printf(" ?? ") ;break ;
                                         case 1 :  printf(" 妖 ")  ;break ;
                                         case 2 :  printf(" 怪 ") ; break ;
                                         case 3 :  printf(" 安 ") ; break ;}
}}printf("\n")  ; 
}}

void xianshi2(int c){
int t=0  ;
if(c%35==0){ printf("\n有boss小心") ; t=1 ;}if(c%4==0){ printf("\n有怪物小心" ) ; t=1 ;}if(c%2==0) { printf("\n有体力瓶")  ; t=1 ;}
if(c%5==0){  printf("\n有武器") ; t=1 ;}if(c%7==0) { printf("\n有宝箱")  ; t=1 ;}if(t==0)printf("\n啥也没有")  ;
}

void xianshi(point a ,int c[100][100] ) {
int i=1   ;
while(i!=0){
   printf("      向上看……1\n向左看……3          向右看……4\n      向下看……2\n退出……0\n")  ;
   scanf("%d",&i)  ;
   switch(i){
       case 1 : xianshi2(c[a.x][a.y+1]) ; break ;
       case 2 : if(a.y==0) printf("墙") ;else xianshi2(c[a.x][a.y-1] ) ;  break ;
       case 3 : if(a.x==0) printf("墙") ;else xianshi2(c[a.x-1][a.y] ) ;  break ;
       case 4 : xianshi2(c[a.x+1][a.y] ) ;     break ;
      }printf("\n") ; }
    printf("\n") ;
}

/*watch背包*/
void bag(hero *a) {hero b=*a ;int c ;  printf("地图…………9") ;
if(b.b[0]>0) printf("\n回血丹*%d…………0",b.b[0]) ;
if(b.b[1]>0) printf("\n精灵球*%d…………1",b.b[1]) ;
if(b.b[2]>0) printf("\n王博学*%d…………2",b.b[2]);
if(b.b[3]>0) printf("\n葵花宝典*%d…………3",b.b[3]);
if(b.b[4]>0) printf("\n金币*%d…………4",b.b[4]);
scanf("%d",&c) ;
switch (c){ case 9 :  printf("不会按p啊") ;break ;
           case 0 :if(b.b[0]>0){ (*a).blood+=100 ; (*a).b[0]-- ;} break ;
           case 1 :if(b.b[1]>0){ printf("您抓到一个皮卡丘") ;(*a).fight+15 ;(*a).energy-=30 ; (*a).b[1]-- ;} break ;
           case 2 :if(b.b[2]>0) {printf("您召唤了作者,他告诉你(13，13)会让你减掉血但是攻击翻倍,");} ; break ;
           case 3 :if(b.b[3]>0) {printf("欲练神功，必先自宫") ; (*a).blood=-4 ;(*a).fight+=35;(*a).b[3]--;}break ;
           case 4 :if(b.b[4]>0) printf("有钱不去商店，死了咋整") ;break ;
 }}

void shunyi(hero *a,int c[100][100]) { int xx,yy;printf("请输入您要去的横纵坐标");scanf("%d",&xx);scanf("%d",&yy);
while(c[xx][yy]!=-1){printf("这是一个您没去过的地方") ;printf("请输入您要去的横纵坐标");scanf("%d",&xx);scanf("%d",&yy);}
(*a).z.x=xx ;  (*a).z.y=yy  ;  (*a).blood-=10 ;
}
int main(void)
{printf("欢迎来到超简陋的游戏世界\n") ;
int d[3] ;   char v ; char vv[1] ;
int c[100][100]  ;
int i , j  ;
for(i=0 ; i<100 ; i++)
{  for(j=0 ; j<100 ; j++)
     c[i][j]=i*2/3 +j*3/4+3 ;}
int b,sss  ;  int m[5]  ;  int l=100  ; int ss=1 ; int bb[10] ;
hero a={"",50,10,50,0,0,0,0  }  ; sss=1 ;
printf("请输入您的名字\n")  ;
scanf("%s",a.name)  ;
printf("\n\n\n\n您好，%s,您的目标是探索这个世界，如果体力值降为0您会死亡，至于其他规则，你猜\n",a.name) ;
printf("您每次可向上下左右移动一格\n请输入0开始游戏\n\n\n")  ;
scanf("%d",&i)  ; char aa ;
if(i==0) printf("\n\n\n\n您太天真了，您已死亡,除了0输啥都行，嘿嘿嘿，   请重新开始\n")   ;
else{  for(b=1 ; a.energy>=0 ; b++)
          {printf("\n第") ;    duchu2(b) ;  printf("天\n") ;
          c[a.z.x][a.z.y]=-1   ; bian(&c[a.z.x][a.z.y+1]) ; bian(&c[a.z.x+1][a.z.y]) ;
           if(a.z.x>0) bian(&c[a.z.x-1][a.z.y]) ;  if(a.z.y>0) bian(&c[a.z.x][a.z.y-1]) ; 
         if(ss>0)  tishi()    ;  else{ xianshi2(a) ;    xianship(a,c) ;}
          if(a.n>=4) printf("瞬间移动……4") ;
          scanf("%s",vv) ; v=vv[0]  ;
             switch(v)
             {case '0' :  a.energy=-100 ;  break ; 
              case '1' : xianshi2(a) ; b-- ;  break   ;
              case '2' : move(&a) ; a.energy-- ;  break   ;
              case '3' : xianshi(a.z,c)  ; b-- ;    break  ;
              case '4' : if(a.n>3) shunyi(&a,c) ; b--  ; break ;
              case '5' : if(a.n>7) break  ;
         case 'w' : if(a.z.y<a.n*a.n +5){a.z.y++ ; a.energy-- ;}else printf("\n您撞墙了\n")  ; break  ; 
         case 'a' : if(a.z.x>0) {a.z.x--;a.energy--;}  else printf("\n您撞墙了\n");  break ;
         case 's' : if(a.z.y>0) {a.z.y--;a.energy--;}  else printf("\n您撞墙了\n");  break ;
         case 'd' : if(a.z.x<a.n*a.n+5 && a.z.x<100){ a.z.x++ ;a.energy--;}else printf("\n您撞墙了\n"); break ;
         case 'i' :b--; if(a.z.y<a.n+5&&a.z.x<100) xianshi2(c[a.z.x][a.z.y+1]) ; else  printf("\n墙\n") ;break ;
         case 'j' :b--; if(a.z.x>0) xianshi2(c[a.z.x-1][a.z.y]) ; else  printf("\n墙\n") ;break ;
         case 'k' :b--; if(a.z.y>0) xianshi2(c[a.z.x][a.z.y-1]); else  printf("\n墙\n") ;break ;
         case 'l' :b--; if(a.z.y<a.n+5) xianshi2(c[a.z.x+1][a.z.y]); else  printf("\n墙\n") ;break ;
         case 'p' :b--; xianship(a,c) ;  break ;
         case 'N' :b--; scanf("%d",&ss) ;if(ss==1998) scanf("%d",&a.n) ; a.energy=99999 ;     break ;  
         case 'g' :b--; ss*=-1 ;  break  ;
         case 't' : printf("乱摁会死人的")  ; a.blood=-100 ; break ;
         case 'b' : if(sss) printf("我去我竟然有个背包") ;sss=0 ; bag(&a) ;
                }
        m[0]=0 ;m[1]=0 ; m[2]=0 ; m[3]=0 ; m[4]=0 ;
         zhixing2( &a,m,c)  ;
         printf("\n") ;
         if(a.blood<l ) a.blood++ ;
         if(a.blood>l ) a.blood-- ;
         if(a.blood<0) a.energy-=10 ;
         teshu(&a,&l,b) ;
     } } 
      printf("您已阵亡,恭喜您活了") ;duchu2(b) ; printf("天\n") ;
 return 0  ;
}



















