/*
			Universidad Autonoma de Aguascalientes
				Centro de Ciencias Basicas
			Departamento de Ciencias de la Computacion
				Programacion Cientifica
		Alumnos: Andrea Melissa Almeida Ortega
				 Román Guadalupe De León Vázquez
				 Oscar Alonso Flores Fernández
			Profesor: Luis Fernando Gutierrez Marfileño
Este programa utiliza los metodos de Cramer y Gauss-Jordan para la resolución de un sistema de ecuaciones a partir de un
circuito con valores dados.
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float det3(float a[3][3]);

int main()
{
    int opc,s,h=0,n, i, j, k;
    s=1;

    float volt, rtf=7.6, resdeta=0, res, c;
    float b[10];
    float deta[11][11];
    float deta2[3][3];
    float detaux[11][11];
    float A[20][20];
	float x[10];

    do{
        printf("\n\n\n------MENU------");
        printf("\n\nPor que te gustaria calcular la corriete de los resistores?")
        printf("\n1.- Por Regla de Cramer");
        printf("\n2.- Por Gauss-Jordan");
        printf("\n3.- Salir\n\n");
        scanf("%d", &opc);
        switch(opc){

        case 1:

                h=0;
                printf("\nBienvenido al Metodo por Regla de Cramer.");
                printf("\nIngresa el valor del voltaje: ");
                scanf("%f", &volt);
                rtf = volt/7.6;

                for(i = 0; i<10; i++){
                    for(j = 0; j<10; j++){
                        deta[i][j]=0;
                    }
                }
                for(i = 0; i<10; i++){
                    printf("\n Ingresa el valor del resistor en K %d: ",i+1);
                    scanf("%f", &deta[i][i]);
                }
                for(i = 0; i<3; i++){
                    for(j = 0; j<3; j++){
                        deta2[i][j]=deta[i][j];
                    }
                }
                resdeta = det3(deta2);

                for(i = 0;i<10; i++){
                    if(i!=0 && i!=3 && i!=6 && i!=9){
                        b[i]=rtf*1.2;
                    }else{
                        b[i]=rtf;
                    }
                }
                do{
                    for(i = 0; i<10; i++){
                        for(j = 0; j<10; j++){
                            detaux[i][j]=deta[i][j];
                        }
                    }
                    for(i = 0; i<10; i++){
                        for(j = 0; j<10; j++){
                            if(j==h){
                                detaux[i][j]=b[i];
                            }
                        }
                    }
                    h++;
                }while(h<10);

                float detr[3][3] = {{b[0],deta2[0][1],deta2[0][2]},{b[1],deta2[1][1],deta2[1][2]},{b[2],deta2[2][1],deta2[2][2]}};
                float detr2[3][3] = {{deta2[0][0],b[0],deta2[0][2]},{deta2[1][0],b[1],deta2[1][2]},{deta2[2][0],b[2],deta2[2][2]}};
                float detr3[3][3] = {{deta2[0][0],deta2[0][1],b[0]},{deta2[1][0],deta2[1][1],b[1]},{deta2[2][0],deta2[2][1],b[2]}};
                float detr4[3][3] = {{b[0],deta2[0][1],deta2[0][2]},{b[1],deta2[1][1],deta2[1][2]},{b[2],deta2[2][1],deta2[2][2]}};
                float detr5[3][3] = {{deta2[0][0],b[0],deta2[0][2]},{deta2[1][0],b[1],deta2[1][2]},{deta2[2][0],b[2],deta2[2][2]}};
                float detr6[3][3] = {{deta2[0][0],deta2[0][1],b[0]},{deta2[1][0],deta2[1][1],b[1]},{deta2[2][0],deta2[2][1],b[2]}};
                float detr7[3][3] = {{b[0],deta2[0][1],deta2[0][2]},{b[1],deta2[1][1],deta2[1][2]},{b[2],deta2[2][1],deta2[2][2]}};
                float detr8[3][3] = {{deta2[0][0],b[0],deta2[0][2]},{deta2[1][0],b[1],deta2[1][2]},{deta2[2][0],b[2],deta2[2][2]}};
                float detr9[3][3] = {{deta2[0][0],deta2[0][1],b[0]},{deta2[1][0],deta2[1][1],b[1]},{deta2[2][0],deta2[2][1],b[2]}};
                float detr10[3][3] = {{b[0],deta2[0][1],deta2[0][2]},{b[1],deta2[1][1],deta2[1][2]},{b[2],deta2[2][1],deta2[2][2]}};

                printf("\nR1 es de: %.9f", (det3(detr)/resdeta)/1000);
                printf("\nR2 es de: %.9f", (det3(detr2)/resdeta)/1000);
                printf("\nR3 es de: %.9f", (det3(detr3)/resdeta)/1000);
                printf("\nR4 es de: %.9f", (det3(detr4)/resdeta)/1000);
                printf("\nR5 es de: %.9f", (det3(detr5)/resdeta)/1000);
                printf("\nR6 es de: %.9f", (det3(detr6)/resdeta)/1000);
                printf("\nR7 es de: %.9f", (det3(detr7)/resdeta)/1000);
                printf("\nR8 es de: %.9f", (det3(detr8)/resdeta)/1000);
                printf("\nR9 es de: %.9f", (det3(detr9)/resdeta)/1000);
                printf("\nR10 es de: %.9f", (det3(detr10)/resdeta)/1000);
                
                break;
            case 2:

                n=10;
                printf("\nBienvenido al Metodo por Gauss-Jordan");
                printf("\nIngresa el valor del voltaje: ");
                scanf("%f", &volt);
                rtf = volt/7.6;

                for(i = 1; i<=n; i++){//Inicializamos nuestra matriz con base en nuestro sistema de 10x10
                    for(j = 1; j<=n+1; j++){
                        A[i][j]=0;
                    }
                }
                for(i = 1; i<=n; i++){//Ingresamos los datos para las ecuaciones, sabiendo ya la forma del sistema.
                    printf("\n Ingresa el valor del resistor en K %d: ",i);
                    scanf("%f", &A[i][i]);
                }
                        A[1][11]=rtf;
                        A[2][11]=rtf*1.2;
                        A[3][11]=rtf*1.2;
                        A[4][11]=rtf;
                        A[5][11]=rtf*1.2;
                        A[6][11]=rtf*1.2;
                        A[7][11]=rtf;
                        A[8][11]=rtf*1.2;
                        A[9][11]=rtf*1.2;
                        A[10][11]=rtf;

                for(j=1; j<=n; j++){
                    for(i=1; i<=n; i++){
                        if(i!=j){
                            c=A[i][j]/A[j][j];
                            for(k=1; k<=n+1; k++){
                                A[i][k]=A[i][k]-c*A[j][k];
                            }
                        }
                    }
                }
                printf("\nLa Intensidad de corriente es: \n");
                for(i=1; i<=n; i++){
                    x[i]=A[i][n+1]/A[i][i];
                    printf("\n R%d = %.9f\n",i,x[i]/1000);
                }

                break;
            case 3:
                printf("Saliendo... presiona cualquier tecla para continuar");
                s=0;
                break;
            default:
                printf("Debes de ingrear una de las que están en el menú.");
                break;

        }

    }while(s==1);
    return 0;
}

float det3(float a[3][3]){

    return (a[0][0]*a[1][1]*a[2][2])-(a[0][0]*a[1][2]*a[2][1])+(a[0][1]*a[1][2]*a[2][0])-(a[0][1]*a[1][0]*a[2][2])+(a[0][2]*a[1][0]*a[2][1])-(a[0][2]*a[1][1]*a[2][0]);

}
