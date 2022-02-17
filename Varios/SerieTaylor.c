/*
UAA
ICI
Serie de Taylor de la f(x) =tan
Centro de Ciencias Básicas
Programación Científica
OSCAR ALONSO FLORES FERNÁNDEZ
ROMÁN GUADALUPE DE LEÓN VÁZQUEZ
Profesor: Luis Fernando Gutiérrez Marfileño
*/
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

//Grados - radianes
float convertir(float ang){
float rad, PI= 3.141592653;;
rad= ang*PI/180;
return rad;
}

//Factorial
float factorial(float a){
if(a<0) return 0;
else if(a>1) return a*factorial(a-1);
return 1;
}

int main(){
setlocale(LC_ALL,"");
int n=0;
float an, conversion,error;
double tn=0;

printf("Tangente de un ángulo");
printf("\nSerie de Taylor");

while(n!=4){

printf("\nI.   Tangente de grado 2");
printf("\nII.  Tangente de grado 4");
printf("\nIII. Tangente de grado 6");
printf("\n4. Salir\n");
scanf("%d", &n);

switch(n){

case 1:
printf("\nÁngulo: ");
scanf("%f", &an);

conversion=convertir(an);
tn = (conversion/factorial(1));

error= tan(conversion) - tn;


printf("Tan(%.2f)= %.9f\n\n", an, tn);
printf("\n\tError: %.9f", error);
printf("\n\Valor Tan(%.2f)= %.4f\n", an, tan(conversion));
printf("Valor a partir del polinomio: %.9f\n", tn);

printf("%.4f - %.9f = %.9f\n\n",tan(conversion), tn, error);
system("pause");
break;

case 2:
printf("\nÁngulo: ");
scanf("%f", &an);

conversion=convertir(an);
tn = (conversion/factorial(1)) + (2*pow(conversion,3)/factorial(3));

printf("Tan(%.2f)= %.9f\n\n", an, tn);
printf("\n\tError: %.9f\n\n");
printf("Valor Tan(%.2f)= %.4f\n", an, tan(conversion));
printf("Valor a partir del polinomio: %.9f\n", tn);

error= tan(conversion) - tn;

printf("%.4f - %.9f = %.9f\n\n",tan(conversion), tn, error);
system("pause");
break;

case 3:
printf("\nÁngulo: ");
scanf("%f", &an);

conversion=convertir(an);
tn = (conversion/factorial(1)) + (2*pow(conversion,3)/factorial(3)) +
(16*pow(conversion,5)/factorial(5));

printf("Tan(%.2f)= %.9f\n\n", an, tn);
printf("\n\tError: %.9f\n\n");
printf("Tan(%.2f)= %.4f\n", an, tan(conversion));
printf("Valor partir del polinomio: %.9f\n", tn);

error= tan(conversion) - tn;

printf("%.4f - %.9f = %.9f\n\n",tan(conversion), tn, error);
system("pause");
break;

case 4:
break;

default:
printf("No válido");
break;
}
system("CLS");
}

system("CLS");
printf("\n\tFIN\n\n");
system("pause");
return 0;
}
