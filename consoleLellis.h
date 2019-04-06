//Linha asterisco nova linha
void linhaAstN(){
     int i;
     
     printf("\n");
     for(i=0; i<63 ; i++ )
              printf("*");
              
     printf("\n");
}

//Linha asterisco
void linhaAst(){
     int i;
     
     
     for(i=0; i<63 ; i++ )
              printf("*");
              
     printf("\n");
}

//Cabecalho
void printHeader(){
     int i;
     
     linhaAst();
     
     printf("*");
     for(i = 0; i<20 ; i++)
           printf(" ");
           
     printf("IFSUL - ELETRONICA");
     for(i = 0; i<23 ; i++)
           printf(" ");
           
     printf("*\n*");
     for(i = 0; i<20 ; i++)
           printf(" ");
           
     printf("MADE BY KING DAVI AND BARON JOHN");
     for(i = 0; i<9 ; i++)
           printf(" ");
     printf("*\n");
     
     linhaAst();
}

//Tchau
void tchau(){
     linhaAstN();
     printf("Obrigado por usar o nosso programa\n");
     printf("Thx for using our app\n");
     printf("Vielen Dank, dass Sie unsere App verwenden\n");
     linhaAst();
     printHeader();
     system("pause");
}

//Print Lista de programas
void printLista(){
     linhaAstN();
     printf("R - Conversor Retangular Polar\n");
     printf("P - Conversor Polar Retangular\n");
     printf("C - Couloumb Calculator\n");
     printf("M - Calculadora de Modulo\n");
     printf("F - Calculadora Forca Magnetomotriz\n");
     linhaAstN();
     
}
     
//Seletor de Programa
char programSelect(){
     char input;
     printLista();
     printf("Digite o codigo correspondente do programa : ");
     scanf(" %c",&input);
     linhaAst();
     
     return input;
}


     
     
     
     



