/*
							UAA
				Centro de Ciencias Básicas.
				Departamento de Computación
			Ingeniería en Computación Inteligente.
			Alumno: Román Guadalupe De León Vázquez
		  Profesor: LUIS FERNANDO GUTIERREZ MARFILEÑO
*/


#include<stdio.h>
#include <math.h>
#include <stdlib.h>


float funcion (float x)
{
return ((x*(sin(x))-1);
}



int main(){
	int sel=0,cont=0,band=0;
	float a,b,xm,error,z,w;
	
		while(band==0){	
			printf("Método de aproximación de la bisección obtener una raíz de la función f(x) = x [sen(x)] - 1");
			printf(" 1.- Intervalo inicial\n");
			printf(" 2.- Insertar la tolerancia al error deseado \n");
			printf(" 3.- Mostrar raiz\n");
			printf(" 4.- Salir\n");
			printf(" Ingresa la opcion:\n");
			scanf("%d",&sel);
		
			switch (sel)
			{
				case 1:
					printf("Dame el valor de inicial de A: ");
					scanf("%f",&a);
					z=a;
					printf("Dame el valor de inicial de B: ");
					scanf("%f",&b);
					w=b;
					break;
					
					
				
				case 2:
					printf("Toleracia al error deseado: ");
					scanf("%f",&error);
					break;		
					
				case 3:
					
					do{
						xm=(a+b)/2;
						if((funcion(a)*funcion(xm))<0){
							b=xm;
						}
				
						if((funcion(a)*funcion(xm))>0){
							a=xm;
						}
						if((funcion(xm))==0){
				break;
					}
					xm=(a+b)/2;
				
				
					}while((y-xm)>error);
					printf("EL intervalo inicial es[%.9f , %.9f]\n",z,w);
					printf("EL margen de error es %.9f\n",error);
					printf("La raiz es %.9f ",xm);
					getchar();
					break;		
				case 4:
				
					band=1;
					break;			
				getchar();
			}	
		}
		
	getchar();
	return 0;
}

