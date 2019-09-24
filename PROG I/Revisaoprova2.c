#include <stdio.h>
#include <math.h>
main(){
	/*
	//44
	int input;
	printf("Digite um Numero: ");
	scanf("%d",&input);
	
	while(input != 0){
		if(input > 0)
			printf("POSITIVO\n");
		else
			printf("NEGATIVO\n");
		printf("Digite um Numero: ");
		scanf("%d",&input);	
	}
	*/
	
	/*
	//45
	int input;
	printf("Digite um Numero: ");
	scanf("%d",&input);
	
	while(input > 0){
		if(input % 2 ==0)
			printf("PAR\n");
		else
			printf("IMPAR\n");
		printf("Digite um Numero: ");
		scanf("%d",&input);
	}
	*/
	
	/*
	//46
	
	float nota1,nota2;
	do{
		printf("Digite a primeira nota: ");
		scanf("%f",&nota1);
		
		if(nota1 < 0);
		else{
			printf("Digite a segunda nota: ");
			scanf("%f",&nota2);
			printf("Media: %f\n",(nota1+nota2)/(float)2);
		}	
	}while(nota1 >= 0);
	*/
	
	/*
	//55
	float nota1,nota2;
	while(1){
		printf("Digite a primeira nota: ");
		scanf("%f",&nota1);
		while(!(nota1>=0 && nota1<=10)){
			printf("Nota Invalida\n");
			printf("Digite a primeira nota: ");
			scanf("%f",&nota1);
		}
		printf("Digite a segunda nota: ");
		scanf("%f",&nota2);
		while(!(nota2>=0 && nota2<=10)){
			printf("Nota Invalida\n");
			printf("Digite a segunda nota: ");
			scanf("%f",&nota2);
		}
		printf("Media: %f\n",(nota1+nota2)/(float)2);
	}
	*/
	//63
	int input1,input2,cont;
	cont = 0;
	printf("Digite o primeiro valor: ");
	scanf("%d",&input1);
	while(input1 >=0){
		printf("Digite o segundo valor: ");
		scanf("%d",&input2);
		if(input1 > input2 && input2 >=0)
			cont++;
		input1 = input2;
	}
	printf("Resultado: %d",cont);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
