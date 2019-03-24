//Da print da data com parâmetro de entrada
void exibeData(int dia,int mes,int ano){
	int diamenor = 0,mesmenor = 0;
	if(dia<10)
		diamenor = 1;
			
	if(mes<10)
		mesmenor = 1;
	
	if(diamenor == 1){
		if(mesmenor == 1)
			printf(" %01d/%01d/%d",dia,mes,ano);
		else
			printf(" %01d/%d/%d",dia,mes,ano);
	}
	else{
		if(mesmenor == 1)
			printf(" %d/%01d/%d",dia,mes,ano);
		else
			printf(" %d/%d/%d",dia,mes,ano);
	}
}
//Da print da tabuada do parâmetro de entrada
void exibeTabuada(int multi){
	int i;
	for(i = 1; i <= 10; i++){
		printf("%dX%d = %d\n",i,multi,multi*i);
	}
}
/*Funções do Lellis (Extremamente mal feitas)*/

