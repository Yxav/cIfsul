#include <stdio.h>
#include <math.h>
#include "questao1_prova1.h"

main(){
	char input;
	double r, R, permeMagRel, magFlux,ffm;
	do{
		printf("Digite o valor de r R permeMagRel magFlux nesse formato\n: ");
		scanf("%lf %lf %lf %lf", &r, &R, &permeMagRel, &magFlux);
		ffm = forcMagMotriz(r, R, permeMagRel, magFlux);
		printf("A forca Magnetomotriz desse circuito eh: %lf\n",ffm);
		printf("Deseja fazer um novo cálculo?\n(s/n) : ");
		scanf(" %c",&input);
	}while(input == 's');
	obrigado();
}
