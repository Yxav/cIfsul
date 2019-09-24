#include <stdio.h>
#include <math.h>
main(){
	//120
	/*
	int i,k,j;
	
	for(i = 1000; i <= 9999; i++){
		k = i/100;
		j = i%100;
		if(pow(j+k,2) == i)
			printf("%d = %d+%d\n",i,j,k);
	}
	*/
	
	/*
	//122
	int input,resto,soma,i;
	scanf("%d",&input);
	
	while(input>=0){
		soma = 0;
		resto = input;
		while(resto > 0){
			soma += resto%10;
			resto = resto/10;
		}
		printf("%d\n",soma);
		scanf("%d",&input);
	}
	*/
	/*
	int input,soma,resto,n,bin;
	
	scanf("%d",&input);
	
	while(input >= 0){
		
		bin = 1;
		n = 0;
		resto = input;
		soma = 0;
		while(resto > 0){
			soma += resto%10 * pow(2,n);
			n++;
			if(resto%10 > 1 )
				bin = 0;
			resto = resto/10;
		}
		
		if(bin == 1)
			printf("SIM %d\n",soma);
		else
			printf("NAO\n");
		
	
		scanf("%d",&input);
	}
	*/
	
	int n1,n2,i,flagr;
	
	scanf("%d",&n1);
	while(n1<1)
		scanf("%d",&n1);
	scanf("%d",&n2);
	while(n2<1)
		scanf("%d",&n2);
	
	while(n1<=n2){
		flagr = 0;
		for(i = 1; i <= n1;i++){
			if(n1%i == 0 && i!=1 && i !=n1)
				flagr=1;
		}
		if(flagr==0 && n1 != 1)
			printf("%d ",n1);
		n1++;
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
