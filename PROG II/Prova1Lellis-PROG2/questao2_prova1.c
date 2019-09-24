#include <stdio.h>
#include <math.h>
#include "questao1_prova1.h"
#include "questao2_prova1.h"

main(){
	char input;
	double r, R, permeMagRel, magFlux,induct;
	int n_espiras;
	do{
		printf("Digite o valor de r R permeMagRel numeroEspiras  nesse formato\n: ");
		scanf("%lf %lf %lf %d", &r, &R, &permeMagRel, &n_espiras);
		induct = inductCalc(r,R,permeMagRel,n_espiras);
		printf("A Indutancia desse toroide  eh: %lf H\n",induct);
		printf("Deseja fazer um novo cálculo?\n(s/n) : ");
		scanf(" %c",&input);
	}while(input == 's');
	programaQuit();
}
