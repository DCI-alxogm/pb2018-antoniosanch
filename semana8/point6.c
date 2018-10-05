#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *ptr,i,n1,n2;
	printf("introduce el numero de elementos n1: \n");
	scanf("%d",&n1);
	printf("\nintroduce el numero de elementos n2");
	scanf("%d",&n2);
	ptr = (int*) malloc(n1 * sizeof(int));
	printf("Direccion de la memoria reservada:  \n");
	for(i=0;i<n1;++i){
		printf("%x\t",ptr +1);
	}
	ptr = realloc(ptr,n2);
	for(i=0;i<n2;++i){
		printf("%u\t"),ptr + i;
			}
			free(ptr);
			return 0;
}
