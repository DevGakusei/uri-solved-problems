#include <stdio.h>

int main(){
	double N1,N2,N3,N4;
	scanf("%lf %lf %lf %lf",&N1,&N2,&N3,&N4);
	double media = (2*N1+3*N2+4*N3+N4)/10;
	printf("Media: %.1lf\n",media);
	if(media>=7.0){
		printf("Aluno aprovado.\n");
	}else if(media>=5.0){
		printf("Aluno em exame.\n");
		double nota_exame;
		scanf("%lf",&nota_exame);
		printf("Nota do exame: %.1lf\n",nota_exame);
		media = (media+nota_exame)/2;
		if(media>=5.0){
			printf("Aluno aprovado.\n");
		}else{
			printf("Aluno reprovado.\n");
		}
		printf("Media final: %.1lf\n",media);
	}else{
		printf("Aluno reprovado.\n");
	}
}
