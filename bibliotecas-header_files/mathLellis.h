
#define PI 3.14159265359

//Converte de radianos para graus
double converteRad(double radians){
       double angle;
       angle = (double)(radians*180)/(double)PI;
       return angle;
}

/* Inicio Conversor Retangular Polar Polar Retangular */
//Retorna o componente real da retangular
double polarRetangA(double c, double theta){
       double a;
       a = c * converteRad(cos(theta));
       return a;      
}

//Retorna o componente imaginário da retangular
double polarRetangB(double c, double theta){
       double b;
       b = c * converteRad(sin(theta));
       return b;  
}

//Retorna o C da forma polar
double retangPolarC(double a,double b){
       double c;
       c = sqrt(pow(a,2)+pow(b,2));
       return c;
}

//Retorna o theta da forma polar
double retangPolarTheta(double a, double b){
         double theta;
         theta = converteRad(atan(b/a));
         return theta;     
}

// Calcula e Imprime RPc e PRc
void calcPrintRP(char input){
     
     double c,theta,a,b;
     
     if(input == 'R' || input == 'r'){
              
          printf("Digite o valor de a e b\nA: ");
          scanf("%lf",&a);
          printf("B: ");
          scanf("%lf",&b);
          
          c = retangPolarC(a,b);
          theta = retangPolarTheta(a,b);
          printf("O valor de C e %lf\nO valor do angulo theta e %lf\n\n",c,theta);
          }
          
     if(input == 'P' || input == 'p'){
              printf("Digite o valor de c e theta\nC: ");
              scanf("%lf",&c);
              printf("Theta: ");
              scanf("%lf",&theta);
              
              a = polarRetangA(c,theta);
              b = polarRetangB(c,theta);
              printf("A forma retangular desse numero e (%lf)+(%lf)j\n\n",a,b);
     }
}
/* Fim Conversor Retangular Polar Polar Retangular */

/* Calculadora de Modulo Inicio*/
//fUNÇÃO DO PROGRAMA INUTIL
double funcProgInut(double a){
       return pow(a,2);
       }
       
//fUNÇÃO 2 DO PROGRAMA INUTIL
double func2ProgInut(double a){
       return sqrt(funcProgInut(a));
}

//Programa Inutil
void progInut(char input){
     
     if(input == 'I' || input == 'i'){
              printf("Digite o valor de a para o PROGRAMA INUTIL: ");
              scanf("%lf",&a);
              printf("Retorno do programa inutil: %lf\n",func2ProgInut(a));
              }
}
/* Fim Calculadora de Modulo */

/*Calculadora FORÇA MAGNETOMOTRIZ*/

// Area Circular
double areaCirculo(double raio){
       return PI * pow(raio,2);
       }
       
//Perimetro do circuito
double perimCirculo(double raio){
       return 2*PI*raio;
       }
       
//Permeabilidade Magnetica
double permeMag(double permRelatv){
       return permRelatv*4*PI*10e-7;
       }
       
//Relutancia Magnetica
double reluct(double areaCircular, double compriMagnet, double permeabMagnet){
       double areaC = areaCircular,permeM = permeabMagnet,perimCircu = compriMagnet;
       return perimCircu/(permeM * areaC);
       }
       
//Força Magneto Motriz
void forcaMagnetMot(char input){
     double r,R,perme,flux;
       if(input == 'F' || input == 'f'){
                printf("Digite o raio da Area do circuito: ");
                scanf("%lf",//TERMINAR O PROGRAMA
       }
/*FIM PROGRAMA FORÇA MAGNETOMOTRIZ*/
       



