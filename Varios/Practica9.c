/*
				Universidad Autonoma de Aguascalientes
					Centro de Ciencias B�sicas
				Departamento de Ciencias de la Computaci�n
					Programaci�n Cient�fica
Alumnos: Rom�n Guadalupe De Le�n V�zquez
		 Oscar Alonso Flores Fern�mdez
Profesor: Luis Fernando Guti�rrez Marfile�o
Demostrar la regla de simpson de 1/3 simple para obtener la aproximaci�n de la integral de
la funcion exp^-x^2
*/
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main(){
	int op;
	do{
  printf("Ingrese una opcion: \n");
  printf("1- Simpson 1/3 para la funcion exp^-x^2 \n");
  printf("2- Salir\n");
	scanf("%d",&op);
	 switch(op){
  	case 1:{
  		int a,b;
  		double eva,evb,in,evin,h,h2,evaf;
  		printf("Ingrese el valor de a: ");
  		scanf("%d",&a);
  		printf("\n");
  		printf("Ingrese el valor de b: ");
  		scanf("%d",&b);
  		h=b-a;
  		h2=h/6;
  		eva=exp(-1*pow(-a,2));
  		evb=exp(-1*pow(-b,2));
  		in=(a+b)/2;
  		evin=exp(pow(-in,2));
  		evaf=h2*(eva+(4*evin)+evb);
  		printf("la aproximacion de la intregal de f(x) epx^-x^2 \n en el intervalo de  a=%d, b=%d es de : ",a,b);
  		printf("%.9lf \n",evaf);
  		break;
		}
		case 2:{
			printf("\n");
			printf("Saliendo............");
			break;
		}
		default:{
			printf("\n");
			printf("Ingrese una opcion");
			break;
		}
	}
 }while(op!=2);
  return 0;
}
