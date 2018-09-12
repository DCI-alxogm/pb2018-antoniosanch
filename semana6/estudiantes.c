#include <stdio.h>
int main ()
{//declaracion de variables y arreglos
	int N=10,mujer,hombre=0;
	int edad[N],cali[N],seme[N],arr[8],i,m,l,p,h;
	int sexo[N];
	float k=0,prom=0;
	m=0;
	for(h=0;h<=8;h++){//Este primer for es para llenar los espacios vacios de las matrices con ceros, tuve que hacer esto porque los espacios en 0 los rellenaba con numeros aleatorio
		arr[h]=0;
		sexo[h]=0;
	}
	printf("Este programa almacena los datos de 10 alumnos (promedio,edad,sexo y semestre \n");
	for(i=0;i<=9;i++){
		p=i+1; //p y puntodiagonal se utilizan para colocar el numero de alumno(orden)
		printf("%d",p);
		printf(".-");
		printf("Indique la edad: \n");
		scanf("%d",&edad[i]);
		printf("%d.Indique la calificacion de 1 a 10: \n",p);
		scanf("%d",&cali[i]);
		prom=prom+cali[i];
		printf("%d.Indique el semestre de 1 a 9: \n",p);
		scanf("%d",&seme[i]);
		if(seme[i]==1){//con if else se guardan en que semestres se indicaron 1-9
			arr[0]++;
		}
		else if(seme[i]==2){
			arr[1]++;
		}
		else if (seme[i]==3){
			arr[2]++;
		}
		else if(seme[i]==4){
			arr[3]++;
		}
		else if(seme[i]==5){
			arr[4]++;
		}
		else if(seme[i]==6){
			arr[5]++;
		}
		else if (seme[i]==7){
			arr[6]++;
		}
		else if(seme[i]==8){
			arr[7]++;
		}
		else if(seme[i]==9){
			arr[8]++;
		}
		printf("%d.Indique el sexo: \n",p);
		scanf("%d",&sexo[i]);
		if(sexo[i]==0){//este if else se coloca para diferenciar los generos, 0 es para mujer y 1 para hombre
			mujer++;
		} 
		else if(sexo[i]==1){
			hombre++;
		}
	}
	for(l=0;l<=8;l++){
		printf("El numero total de alumnos en el semestre: ");
		m=l+1;
		printf("%d \n",m);
		printf("%d \n",arr[l]);
	}
	k=prom/10;//variable donde se guarda el promedio
		printf("Se capturaron 10 estudiantes, de los cuales %d son mujeres y %d son hombres \n",mujer,hombre);
		printf("El promedio de calificaciones de todos los estudiantes es: %f",k);
		
}
