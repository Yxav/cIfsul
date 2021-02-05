#include <stdio.h>
#include <math.h>


main(){
	/*
	//Exercício 41:
	float alt,pes;

	scanf("%f %f",&alt,&pes);
	if((alt>=1.75f && alt<=1.9f)&&(pes>=70 && pes<=80)){
		printf("ACEITO\n");
	}
	else if(!(alt>=1.75f && alt<=1.9f)&&!(pes>=70 && pes<=80))
		printf("TOTALMENTE RECUSADO\n");
		else{
			if(!(alt>=1.75f && alt<=1.9f))
				printf("RECUSADO POR ALTURA\n");
			else
				printf("RECUSADO POR PESO\n");
		}
	*/
	
	//EXercício 42:
	int ltrs,tpo;
	float prec;
	scanf("%d %d %f",&ltrs,&tpo,&prec);
	if(tpo == 1){
		if(ltrs<=20)
			printf("%f",ltrs*(prec-(prec*0.03f)));
		else
			printf("%f",ltrs*(prec-(prec*0.05f)));	
	}
	else{
		if(ltrs<=15)
			printf("%f",ltrs*(prec-(prec*0.035f)));
		else
			printf("%f",ltrs*(prec-(prec*0.06f)));
	}
}
 



