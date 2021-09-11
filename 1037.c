#include <stdio.h>

int main(){
	double n;
	int interval[2]={0,0};
	scanf("%lf",&n);
	if(n<=25){
		interval[0]=0;
		interval[1]=25;
	}else if(n<=50){
		interval[0]=25;
		interval[1]=50;
	}else if(n<=75){
		interval[0]=50;
		interval[1]=75;
	}else if(n<=100){
		interval[0] = 75;
		interval[1] = 100;
	}
	if(interval[1]==0 || n<0){
		printf("Fora de intervalo\n");
	}else if(interval[0]==0){
		printf("Intervalo [%d,%d]\n",interval[0],interval[1]);
	}

	else{
		printf("Intervalo (%d,%d]\n",interval[0],interval[1]);
	}
}
