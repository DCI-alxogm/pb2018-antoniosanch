#include <stdio.h>
int main()
{
	float temp_c,temp_k;
	float inicial=100,final=200,delta;
	int n=10;
	delta=(final-inicial)/n;
	temp_c=inicial;
	while(temp_c<=final){
		temp_k=temp_c+273.15;
		printf("%f %f \n",temp_c,temp_k);
		temp_c=temp_c+delta;  //  temp_c+=delta;
		}
return 0;
}
