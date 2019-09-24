#include <stdio.h>
#include <math.h>

main(){
	//Exercício 16:
	/*
	int input;
	scanf("%f",&input);
	if(input >= 0){
		printf("Positivo");
	}
	else{
		printf("Newgativo");
	}
	*/
	/*
	//Exercício 17:
	float input1,input2;
	scanf("%f %f",&input1,&input2);
	if(input1>input2){
		printf("%f",input1);
	}
	else{
		printf("%f",input2);
	}
	*/
	//Exercício18:
	/*
	float input1,input2;
	scanf("%f %f",&input1,&input2);
	if(input1>input2){
		printf("%f %f",input2,input1);
	}
	else{
		printf("%f %f",input1,input2);
	}
	*/
	/*
	//Exércicio 19:
	int input;
	scanf("%d",&input);
	input = input%2;
	if(input != 0){
		printf("Impar");
	}
	else{
		printf("Par");
	}
	*/
	/*
	//Exercício 20:
	
	int a,b,cmd;
	scanf("%d %d %d",&a,&b,&cmd);
	
	if(cmd == 1){
		printf("%d + %d é igual a: %d",a,b,a+b);
	}
	else{
		printf("%d * %d é igual a: %d",a,b,a*b);
	}
	*/
	
	//Exercício 21:
	/*
	int a,b,cmd;
	scanf("%d %d",&a,&b);
	scanf("%d",&cmd);
	
	if(cmd == 1){
		printf("%d",a+b);
	}
	else{
		printf("%d",(a*b)/(a+b));
	}
	*/
	/*
	//Exercício 22:
	int a,b,resulta,resultb;
	scanf("%d %d",&a,&b);
	scanf("%d",&resulta);
	resultb = a+b;
	if(resulta == resultb){
		printf("Correto");
	}
	else{
		printf("Errado\n");
		printf("%d",resultb);
	}
	*/
	
	//Exercício 23:
	int a,b;
	scanf("%d %d",&a,&b);
	
	
	if(24-a+b>24){
		printf("%d",24-a+b);
	}
	else{
		printf("%d",b-a);
	}
	
	
}
