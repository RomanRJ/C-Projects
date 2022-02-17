/*
	UNIVERSIDAD AUTONOMA DE AGUACALIENTES
		CENTRO DE CIENCIAS BASICAS
	DEPARTAMENTO DE CIENCIAS DE LA COMPUTACION
		PROGRAMACION CIENTIFICA
	
	DE LEON VAZQUEZ ROMAN GUADALUPE
	FLORES FERNANDEZ OSCAR ALONSO
	
	PROFESOR:LUIS FERNANDO GUTIERREZ MARFILEÑO
	
Este programa realiza una evaluacion iterativa del punto fijo para la funcion f(x)=(e^-x)-x y asi encontrar sus raices
*/
#include <stdio.h>
#include <math.h>

int main(){
	float e=2.718281828,err,x,resul,ea=100,xi=0,temp;;
	int r,i=0,s=0;
	do{
		printf("Evaluacion de punto fijo para f(x)=(e^-x)-x\n\n1.-Definir x\n\n2.-Definir error \n\n3.-Evaluar\n\n4.-Salir ");
		scanf("%d",&r);
		switch(r){
		case 1:
			printf("\n\n\nIngrese valor de x: ");
			scanf("%f",&x);
			system("CLS");
			break;
		case 2:
			printf("\n\n\nIngrese valor del error: ");
			scanf("%f",&err);
			system("CLS");
			break;
		case 3:
				printf("\n");
			  do{                       
				  xi = pow(e,(-x));      
				  if (i==0)
				  	printf(".");      
				  else{
				  	ea = fabs(((x-temp)/x)*100);
					}      
					temp=x;      
					x=xi;      
					i++;
					printf(".");          
				}while(ea > err);
				printf("\n\nLa raiz de la funcion es: %.9f\n\n\n\n\n",temp);
				system("PAUSE");
			system("CLS");
			break;
		case 4:
			s=0;
			exit(-1);
			break;
	}
	}while(s=1);
	
	return 0;
}

