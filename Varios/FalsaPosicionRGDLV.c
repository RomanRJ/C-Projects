/*
							UAA
				Centro de Ciencias Básicas.
				Departamento de Computación
			Ingeniería en Computación Inteligente.
			Alumno: Román Guadalupe De León Vázquez
		  Profesor: LUIS FERNANDO GUTIERREZ MARFILEÑO
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){ 

	float a=0,b=0,xm[100],er[100],err=0,fa=0,fb=0,fm=0,xi[100],xf[100],m=0;
	int i=0;
	printf("\nEvaluación del método de falsa posición para la función f(x) = x [sen(x)] - 1\n");
	printf("Dame el limite inferior de la raiz: ");
    scanf("%f",&a);
    printf("Dame el limite superior de la raiz: ");
    scanf("%f",&b);
    printf("Dame el error: ");
    scanf("%f",&err);
    printf("%12s %10s %10s %10s %10s %10s\n", "iteraciones", "Xi", "Xs", "Xm", "F(Xm)", "er");
   do{
		i++;
		fa=(a*sin(a))-1;
		fb=(b*sin(b))-1;
		m=(b-(fb*((b-a)/(fb-fa))));
		fm=(xm[i]*sin(xm[i]))-1;
		xm[i]=m
		er[i]=0;
		if(i>= 2)
		{
			(er[i])=(xm[i-1]-xm[i]);
			er[i]=fabs(er[i]);
		}
  		xi[i]=a;
		xf[i]=b;
		printf("%12d %10f %10f %10f %10f %10f\n", i, xi[i], xf[i], xm[i], fm, er[i]);
		if(fm==0)
		{
			break;
		}
		if(fa*fm<0)
		{
			a=a;
			b=m;
		}else
		{
			a=m;
			b=b;
		}
     }while(err<er[i] || (er[i] == 0.0 && i == 1 && fm!=0));
     printf("\nLa raiz de f(x)=x-cos(x) es: %.9f \niteración: %d\nerror final es: %.9f \n",xm[i],i,er[i]);
}
