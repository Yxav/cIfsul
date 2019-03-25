#include <stdio.h>
#include <math.h>
main(){
	
	/*
	//Exercício 23:
	
	int inicio,fim,durac;
	
	scanf("%d %d",&inicio,&fim);
	
	if(inicio >= fim){
		durac = 24-inicio+fim;
	}
	else{
		durac = fim - inicio;
	}
	printf("Duração: %d",durac);
	*/
	
	/*
	//Exercício 24:
	int entrada,saida,durac,anofabric;
	float valorhora,valortotal,desconto;
	printf("Digite o horario de entrada e saida: \n");
	scanf("%d %d",&entrada,&saida);
	printf("\nDigite o preço da hora: ");
	scanf("%f",&valorhora);
	printf("\n Digite o ano do carro: \n");
	scanf("%d",&anofabric);
	durac = saida - entrada;
	valortotal = durac*valorhora;
	if(anofabric<1990){
		
		
		desconto = valortotal - valortotal/3;
		valortotal = valortotal/3;
		printf("Quantidade de horas : %d\nValor a pagar: %f\n Desconto: %f",durac,valortotal,desconto);
	}
	else{
		printf("Quantidade de horas : %d\nValor a pagar: %f",durac,valortotal);
	}
	*/
	
	float a,b;
	int cmd;
	
	scanf("%f %f",&a,&b);
	scanf("%d",&cmd);
	if(cmd==1)
	{
		printf("%f",a+b);
	}
	else{
		printf("%f",(a*b)/(a+b));
	}
}
