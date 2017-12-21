#include <cstdio>
#include <iostream>
using namespace std;
int main(void) {
	int aa,bb,i,x,y;
	long int a,b;
	scanf("%ld",&a);
	scanf("%d",&aa);
	scanf("%ld",&b);
	printf("wadwad");
	scanf("%d",&bb);
	getchar();
	printf("wadwad");
	x=0;
	y=0;
	while(a != 0){
		if(a%10 == aa)
			x++;
	}
	while(b != 0){	
		if(b%10 == bb)
			y++;
	}
	int q = 0;
	int g = 0;
	for(i=1; x != 0; i*=10){
		x--;
		q+=aa*i;
	}
	for(i=1; y != 0; i*=10){
		y--;
		g+=bb*i;
	}
	printf("%d",q+g);
    return 0;
}
