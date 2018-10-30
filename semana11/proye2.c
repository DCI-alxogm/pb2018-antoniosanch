//creado por Jesus Antonio Sanchez Garcia
#include <stdio.h>
int main(){
	//declaracion de variables
	int i,x,y,j,n,t,a,pr=0,cnt;
	float aba,arr,iz,der,epsi,ent=5,old,tpr;
	char nombre[10];
	FILE *fp;//se abren los archivos de lectura y escritura
	FILE *resultados;
	fp= fopen("valores.txt","r");
	fscanf(fp,"%f %f %f %f %i %f",&aba,&arr,&iz,&der,&n,&epsi);//lectura de datos de os bordes
	fclose(fp);

	float matriz[n][n];//creacion de la matriz nxn en este caso n vale 15
	for(j=0;j<n;j++){
		for(i=0;i<n;i++){
			matriz[i][j]=0;//se rellenan todos los espacios con ceros
		}
	}
	//fase de rellenar los bordes de acuerdo al libro, 100,75,0,50
	for(y=0;y<n;y++){
		for(x=0;x<n;x++){
			if(y==0)
			matriz[x][y]=arr;
			else if(x==0)
			matriz[x][y]=iz;
			else if(x==n-1)
			matriz[x][y]=der;
			else if(y==n-1)
			matriz[x][y]=aba;
			else{
			matriz[x][y]=0;//llenado de los demas espacios con ceros, esta sera la matriz inicial
			}
				
		}
	}
	
for(t=0;t<50;t++){//este bucle for es para contar el numero de iteraciones
	char nombre[10]={'A', 'r', 'c', 'h', '0', '.', 't', 'x', 't', '\0'};//
	nombre[4]=nombre[4]+t;//se nombra de diferente manera 
	resultados = fopen(nombre, "w");//se abre un archivo tipo write
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			fprintf(resultados,"%f\t", matriz[j][i]);
		}
		fprintf(resultados, "\n");		
	}
	fprintf(resultados, "\n");

	fclose(resultados);
old=matriz[7][7];//old sera el valor de la matriz en la posicion 7,7
	for(y=1;y<n-1;y++){
		for(x=1;x<n-1;x++){
				matriz[x][y]=(matriz[x+1][y]+matriz[x-1][y]+matriz[x][y+1]+matriz[x][y-1])/4;
		}
	}
	if(t>0){//la primera iteracion se ignora ya que la funcion se indetermina, por eso se coloca t>0
		tpr=matriz[7][7];
		ent=(tpr-old)/old;//tolerancia de error
		if(ent<epsi){
			t=51;//51 es para que se deje de cumplir la condicion del bucle de iteraciones
		}
		
		}
	}	

	for(y=0;y<n;y++){//impresion de la matriz
		for(x=0;x<n;x++){
			printf("%f",matriz[x][y]);
			printf("\t");
		}
		printf("\n");
	}


	return 0;
}


