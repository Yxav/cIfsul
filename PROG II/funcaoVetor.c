#include <stdio.h>
#include <math.h>


void lerVetor(int vet[],int n) 
{
         int i;
         for (i = 0 ; i < n ; i++)
             scanf("%d" ,&vet[i]);
}
void imprimiVetor(int vet[],int n) 
{
         int i;
         for (i = 0 ; i < n ; i++)
             printf("indice: %d valor: %d\n" ,i,vet[i]);
}
int substituiValor(int vet[], int n, int valorAntigo, int valorNovo)
{
     int i,flag = 0;
     for(i = 0; i < n; i++)
     {
           if(vet[i] == valorAntigo)
           {
                     vet[i] = valorNovo;
                     flag = 1;
           }
     }
     return flag;    
}
int maiorValor(int vet[], int n)
{
    int maiorN = 0,i;
    for(i = 0; i < n; i++)
    {
          if(vet[i] > maiorN)
                    maiorN = vet[i];
    }
    return maiorN;
}

main(){
       int n,tipo,antigo,novo;
       scanf("%d",&n);
       int vet[n];
       lerVetor(vet,n);
       printf("1-Print\n2-Substitui\n3-MaiorValor\n4-Sair\n: ");
       scanf("%d",&tipo);
       while(tipo != 4)
       {
                  if(tipo == 1)
                          imprimiVetor(vet,n);
                  if(tipo == 2)
                  {
                          scanf("%d %d",&antigo,&novo);
                          substituiValor(vet,n,antigo,novo)? :printf("Valor nao encontrado\n");
                  }
                  if(tipo ==3)
                  {
                          novo = maiorValor(vet,n);
                          printf("Maior valor do vetor: %d",novo);
                  }
                  printf("1-Print\n2-Substitui\n3-MaiorValor\n4-Sair\n: ");
                  scanf("%d",&tipo);
       }
                                                      
}

