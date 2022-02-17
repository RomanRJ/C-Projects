/*
		Benemérica Universidad Autónoma de Aguascalientes
				CENTRO DE CIENCIAS BÁSICAS
			DEPARmagENTO DE CIENCIAS DE LA COMPUTACIÓN.
					Programación Científica.
			INGENIERÍA EN COMPUTACIÓN INTELIGENTE
							4° "E"
				"Método de Gaus Jordan"
				Andrea Melissa Almeida Ortega
			Prof. Luis Fernando Gutiérrez Marfileño
		Aguascalientes, Ags., 30 de Junio del 2020.
		
Objetivo: -----------------------------------------
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define t 100

int i,j,k,l,n=0,fila,op,op1,op2;
float a[t][t+1]={0};
void Datos();
void GJ();
void Imp_Mat();
void Resultados();

int main()
{
	int opcion;
    do{ 
       	printf("\t\t--------Menu--------");
        printf("\nSe va a ejecutar la evaluación del metodo de Gauss-Jordan\n");
        printf(" \t1. Iniciar\n");
        printf(" \t2. Salir\n");
        scanf("%d",&opcion);
        switch(opcion){
            case 1:
					Datos();
					Imp_Mat();
					GJ();
					printf("Resultados: ");
					Imp_Mat();
					Resultados();
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

void Datos()
{
	printf("\nIngrese el numero de incognitas: ");
	scanf("%d", &n);
	printf("\nIngrese los valores de cada ecuacion");
  	printf("\nConsidere que la columna %d perenece al resultado de la ecuacion\n\n", n+1);
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n;j++)
		{
			printf("Valor para: [%d][%d] = ", i+1,j+1);
			scanf("%f",&a[i][j]);
		}
		printf("\n");
	}
}
void GJ()
{
	double may, aux, pivote;
    int ind;
    
    for(k=0;k<n;k++)
	{
        may=abs(a[k][k]);
        ind=k;
        for( l=k+1;l<n;l++)
		{
            if(may<abs(a[l][k]))
			{
                may=abs(a[l][k]);
                ind=l;
            }
        }
        if(k!=ind)
		{
            for( i=0;i<n+1;i++)
			{
                aux=a[k][i];
                a[k][i]=a[ind][i];
                a[ind][i]=aux;
            }     
        }
        if(a[k][k]==0)
		{
            printf("No tiene solucion");
            break;
        }
        else
		{
            for( i=0;i<n;i++)
			{
                if(i!=k)
				{
                    pivote=-a[i][k];
                    for( j=k;j<n+1;j++)
					{
                        a[i][j]=a[i][j]+pivote*a[k][j]/a[k][k];
                    }
                }
                else
				{
                    pivote=a[k][k];
                    for( j=k;j<n+1;j++)
					{
                        a[i][j]=a[i][j]/pivote;
                    }
                }
            }
        }
	}
}

void Imp_Mat()
{
	printf("\n\t\t\t Matriz: \n");
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(j==n)
			{
				printf("|");
			}
			printf("  %.9f",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void Resultados()
{
	for(i=0;i<=n-1;i++)
	{
		printf("\nX[%d] = %.9f", i+1,a[i][n]);
	}
	printf("\n\n");
}

