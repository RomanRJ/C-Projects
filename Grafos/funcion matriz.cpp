#include <bits/stdc++.h>
int mat[4];
void eliminar_repetidos(int vec[])
{
	for(int x=0;x<4;x++)
	{
		for(int y=0;y<4;y++)
		{
		if(x==y){
			
		}
		else
		{
			if(vec[y]==vec[x] && vec[y]!=0)
			{
				vec[y]=0;
			}
		}
		}
	}
}
int main()
{
	
		for (int y=0;y<4;y++)
		{
			printf("ingrese el valor de la posicion %d: ",y);
			scanf("%d",&mat[y]);
		}
	
	eliminar_repetidos(mat);
		for (int y=0;y<4;y++)
		{
			printf("%d ",mat[y]);
	
		}
	
	system("pause");
	return 0;
}
