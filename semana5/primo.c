
#include <stdio.h>
int main()
char c[1000];
int i,j,n;

int main ()
{
printf("Teclee el numero de valores que desea obtener\n");
scanf("%d", &n); 

for(i=2;i<=n;i++)//inicializa, si tiene un 1 es primo
	c[i]=1;

for(i=2;i*i<n;i++) //desde i hasta que iÂ² sea menor que n
	if(c[i]==1) //condicion si i tiene un 1 entonces se aplica for
		for(j=i;j<=(n/i);j++)//i*j tiene que ser <=n, despejar j
			c[i*j]=0;

for(i=0;i<n;i++)
	if(c[i]==1)
		printf("%d\t", i);
	
}

