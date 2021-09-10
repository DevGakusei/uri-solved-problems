#include <stdio.h>
#include <math.h>

int main(){
	double A,B,C,delta;
	scanf("%lf %lf %lf",&A,&B,&C);
	delta = pow(B,2) -4*A*C;
	if(delta<0 || A==0){
		printf("Impossivel calcular\n");
	}else{
		double R1 = (-B +sqrt(delta))/(2*A);
		double R2 = (-B -sqrt(delta))/(2*A);
		printf("R1 = %.5lf\nR2 = %.5lf\n",R1,R2);		
	}
}
