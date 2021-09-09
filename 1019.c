#include <stdio.h>

int main(){
	int N, hours=0, minutes=0,seconds=0;
	//reading the time expressed only in seconds
	scanf("%d",&N);
	//calculation the hours and minutes
	while(N>=3600){
		N-=3600;
		hours++;
	}
	while(N>=60){
		N-=60;
		minutes++;
	}
	seconds = N;
	printf("%d:%d:%d\n",hours,minutes,seconds);
}
