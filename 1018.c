#include <stdio.h>

int main(){
		int value, v[]={0,0,0,0,0,0,0};
		//Which position of the vector represents one ballot or cedule
		scanf("%d",&value);
		int bk_value = value;
		while(value>=100){
			value-=100;
			v[0]++;
		}
		while(value>=50){
			value-=50;
			v[1]++;
		}
		while(value>=20){
			value-=20;
			v[2]++;
		}
		while(value>=10){
			value-=10;
			v[3]++;
		}
		while(value>=5){
			value-=5;
			v[4]++;
		}
		while(value>=2){
			value-=2;
			v[5]++;
		}
		while(value>=1){
			value-=1;
			v[6]++;
		}
		//printing the value and the number of ballots used 
		printf("%d\n",bk_value);
		printf("%d nota(s) de R$ 100,00\n",v[0]);
		printf("%d nota(s) de R$ 50,00\n",v[1]);
		printf("%d nota(s) de R$ 20,00\n",v[2]);
		printf("%d nota(s) de R$ 10,00\n",v[3]);
		printf("%d nota(s) de R$ 5,00\n",v[4]);
		printf("%d nota(s) de R$ 2,00\n",v[5]);
		printf("%d nota(s) de R$ 1,00\n",v[6]);
		
	}
