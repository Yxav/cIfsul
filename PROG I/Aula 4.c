#include <stdio.h>

main(){
	/*
	//Exercício 26:
	int gola,golb;
	scanf("%d %d",&gola,&golb);
	if(gola > golb){
		printf("Vitória do grêmio");
	}
	else{
		if(gola==golb){
			printf("Empate");
		}
		else{
			printf("Vitória do Inter");
		}
	}
	*/
	/*
	//Exercício 27:
	
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if (a>b){
		if(a>c)
		printf("%d",a);
	}
	else{
		if(b>c)
		printf("%d",b);
		
	}
	
	if (c>b){
		if(a<c)
		printf("%d",c);
	}
	*/
	
	/*
	//Exercício 28:

	int a,b,c,s;
	scanf("%d %d %d",&a,&b,&c);
	
	if (a>b){
		if(b>c)
		s=a+b;
		else
		s=a+c;	
	}
	else{
		if(a>c)
		s=a+b;
		else
		s=c+b;
	}
	printf("%d",s);
	*/
	
	
	/*
	 //Exercício 29:
	 
    int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
	
	if(b>c)
	printf("%d %d %d",c,b,a);
	else{
		if(c>a)
		printf("%d %d %d",b,a,c);
		else
		printf("%d %d %d",b,c,a);	
	}
}
else{
	if(a>c)
	printf("%d %d %d",c,a,b);
	else{
		if(c>b)
	printf("%d %d %d",a,b,c);
	else
	printf("%d %d %d",a,c,b);
	}
}
	*/
	
	//Exercício 30:
	int comando;
	float v,i,r;
	
	scanf("%d",&comando);
	if(comando<2)
	{
		printf("Digite os valores de R e I:\n");
		scanf("%f %f",&r,&i);
		printf("%f",r*i);
	}
	else{
	if(comando == 2){
		printf("Digite os valores de V e I:\n");
		scanf("%f %f",&v,&i);
		printf("%f",v/i);	
	}
	else{
		printf("Digite os valores de V e R:\n");
		scanf("%f %f",&v,&r);
		printf("%f",v/r);	
	}
	
}
	
	
}
