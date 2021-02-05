float bFloatToDFloat(){
     int bit,power = -1;
     float accDFloat = 0;
     
     printf("Digite o valor do bit %d da parte decimal, digite qualquer outro numéro\npara ver o resultado\n: ",power);
     scanf("%d",&bit);
   
     while(bit == 1 || bit == 0){
       accDFloat += bit * pow(2,power);
       power--;
       
       printf("Digite o valor do bit %d da parte decimal, digite qualquer outro numéro\npara ver o resultado\n: ",power);
       scanf("%d",&bit);
     }
      return accDFloat;
}

int bIntToDInt(){
    int bit,accDInt = 0,power = 0;
    
    printf("Digite o valor do bit %d da parte inteira, digite qualquer outro numéro\npara ir a parte decimal\n: ",power);
    
    scanf("%d",&bit);
    
    while(bit == 1 || bit == 0){
        accDInt += bit * pow(2,power);
        power++;
        
        printf("Digite o valor do bit %d da parte inteira, digite qualquer outro numéro\npara ir a parte decimal\n: ",power);
        scanf("%d",&bit);
     }
     return accDInt;
}

void bFToDF(){
     int inteiro;
     float decimal,convertido;
     
     inteiro = bIntToDInt();
     decimal = bFloatToDFloat();
     convertido = inteiro + decimal;
     
     printf("O numero final e %f\n",convertido);
     system("pause");
     }

     
               
