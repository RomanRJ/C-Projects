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
#include<math.h>
#include<locale.h>

main()
{
	setlocale(LC_ALL,"");
	int a,b,c,e=0,dim,i,j,op;
	float d;
	
	do
	{
		system("CLS");
		printf("\nProgramar la solución del siguiente sistema de ecuaciones por metodo de GAUSS\n");
		printf("-x + x - x = -1\n");
		printf("4x - 2x+ 2x = 0\n");
		printf("-3x - 2x = -4\n");
		printf(" \n    MENU    \n\n");
		printf("1.- Ejecutar el método\n\n");
		printf("2.- Salir\n\n");
		printf("Ingrese una opción: ");
		
		scanf("%d",&op);
		
		system("CLS");
		
		switch(op){
			case 1:{
					dim=3;
					
					float mat[dim][dim+1];
					
					for(i=0;i<dim;i++){
						for(j=0;j<=dim;j++){
							if(j==dim){
								printf("Escriba el valor c%d:\n",i+1);
								scanf("%f",&mat[i][j]);
							}
							else{
								printf("Escriba el valor a%d%d:\n",i+1,j+1);
								scanf("%f",&mat[i][j]);
							}
						}
					}
					
					printf("\n");
					printf("La matriz original:\n");
					for(i=0;i<dim;i++){
						for(j=0;j<=dim;j++){
							printf("[%f] ",mat[i][j]);
						}
						printf("\n");
					}
					
					for(a=0;a<dim-1;a++){
						for(b=a+1;b<dim;b++){
							c=0;
							d=mat[a][c+e]/mat[b][c+e];
							for(c=0;c<=dim;c++){
								mat[b][c]=mat[a][c]-(d*mat[b][c]);
							}
						}
						e++;
					}
					
					printf("\n");
					printf("La matriz reducida a triangular superior:\n");
					for(i=0;i<dim;i++){
						for(j=0;j<=dim;j++){
							printf("[%f] ",mat[i][j]);
						}
						printf("\n");
					}
					
					float res[dim];
					
					b=0;
					for(a=dim-1;a>=0;a--){
						c=b;
						while(c!=0){
							mat[a][dim]=mat[a][dim]-(mat[a][dim-c]*res[dim-c]);
							c--;
						}
						b++;
						res[a]=mat[a][dim]/mat[a][a];
					}
					
					printf("\n");
					printf("Resultados:\n");
					for(i=0;i<dim;i++){
						printf("x%d = %f\n",i+1,res[i]);
					}
					getchar();
					break;
				}
			case 2:{
					break;
				}		
		}
		getchar();
		
	}
	while(op!=2);	
}
