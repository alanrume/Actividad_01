#include <stdio.h>

int main () {
	
	float a,b;
	
	printf("Ingrese el dividendo: ");
	scanf("%f",&a);
	
	printf("Ingrese el divisor: ");
	scanf("%f",&b);
	
	if (b==0){
		printf("ERROR");
	}
	
	else{ 
	float division= a/b;
	
	printf("Resultado: %.4f",division);
	}
	
	
	

}
