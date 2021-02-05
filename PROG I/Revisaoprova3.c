#include <stdio.h>
#include <math.h>

main(){
	/*
	int termos,cont;
	float somato;
	scanf("%d",&termos);
	while(termos != 0){
		somato = 0;
		for(cont = 1; cont <= termos; cont++){
			if(cont%2 == 0)
				somato -= (float)(1000-(cont-1)*3)/cont;
			else
				somato += (float)(1000-(cont-1)*3)/cont;
		}
		printf("%f\n",somato);
		scanf("%d",&termos);
	}
	*/
	/*
	float somato = 0;
	int cont,nume;
	nume = 1;
	for(cont =1;cont <= 50; cont++){
		somato += (float)nume/cont;
		nume+=2;
	}
	printf("%f",somato);
	*/
	int n,i;
	float somato = 0;
	scanf("%d",&n);
	for(i =1; i<=n;i++){
		somato += (float)1/(i+2);
	}
	printf("%f",somato);
}
