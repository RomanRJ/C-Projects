/*
		Universidad Autónoma de Aguascalientes
				CENTRO DE CIENCIAS BÁSICAS
			DEPARMNTO DE CIENCIAS DE LA COMPUTACIÓN.
					Programación Científica.
			INGENIERÍA EN COMPUTACIÓN INTELIGENTE
							4° "E"
				Román Guadalupe De León Vázquez
			Prof. Luis Fernando Gutiérrez Marfileño
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void simple();
void mult();
double funcion();

int main(){
int opc=0; 
do{
		printf("\nSe va a ejecutar la evaluacion de la regla trapezoidal simple para la funcion f(x)= 3ln(x) en el intervalo [2,8].\n");
		simple();
		printf("Pulse 0 para continuar");
        scanf("%d",&opc);
        system("cls");	
}while(opc==0);
	printf("Saliendo...");
	system("PAUSE");
    return 0;
} 
void simple()
{
	double b=0,h,fb=0,are,a=0,fa=0;
	printf("\nIngrese el valor de a: ");
	scanf("%lf", &a);
	printf("Ingrese el valor de b: ");
	scanf("%lf", &b);
	h=(b-a);
	fa = funcion(a);
	fb = funcion(b);
	are=h*((fa+fb)/2);
	printf("\nEl area bajo la curva de la funcion es: %.9lf\n",are);
}
double funcion(double x){
	double fun=3*log(x);
	return fun;
}



