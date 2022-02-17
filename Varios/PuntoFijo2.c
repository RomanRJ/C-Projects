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

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void F();

int main(){ 
    int opcion;
    do{ 
       	printf("\t\t--------Menú--------");
        printf("\nSe va a ejecutar la evaluación del metodo de punto fijo para la funcion \nf(x)=(e^(-x))- x.\n");
        printf(" \t1. Iniciar\n");
        printf(" \t2. Salir\n");
        scanf("%d",&opcion);
        switch(opcion){
            case 1:
					F();
                    break;
            case 2:
					break;
            default: printf("¡¡¡Opcion no valida...!!!\n");
                     break;
        }
        system("pause");
        system("cls");
    }while(opcion!=2);
    return 0;
}

void F()
{
	float e=2.718281828, err=0,dif=0,x=0,xi=0,xj=0,nu=0;
	printf("Ingresar el valor de Xo (X inicial)): ");
    scanf("%f",&x);
    printf("Ingresar la tolerancia al error: ");
    scanf("%f",&err);
    printf("\n#               X               Diferencia         \n\n\n");
    do
	{
		if(nu==0)
		{
            xi=(pow(e,(-x)));
   			printf("%0.0f      %.9f      ----------      \n",nu,xi);
			nu=nu+1;
			dif=xi;
		}else
		{
        xj=(pow(e,(-x)));
		dif=xj-x;
		printf("%0.0f      %.9f       %.9f\n",nu,xj,dif);
		x=xj;
		nu++;
		}

		if(dif<0)
		{
			dif=dif*(-1);
		}
	}
	while(err<dif);
	printf("\nEl valor a la aproximación es: %.9f \nEsta en la iteracion: %0.0f\nTolerancia al error final es: %.9f \n\n",xj,nu-1,dif);
}
