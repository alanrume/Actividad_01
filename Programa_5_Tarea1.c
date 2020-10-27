#include <stdio.h>

int main () {
	 
	int r, res;
	
	float area,perimetro;
	
	printf("seleccione la opcion deseada:\n1. -Area\n2.-Perimetro");
	
	scanf("%d",&res);
	switch(res){
		
		case 1:
			
			printf("ingrese el radio del circulo:");
			scanf("%d",&r);
			area= 3.1416*(r*r);
			printf("el area del circulo es: %.2f ",area);
			break;
			
		case 2:
			
			printf("ingrese el radio del circulo:");
			scanf("%d",&r);
			perimetro= 3.1416*r;
			printf("el perimetro del circlulo es: %.2f",perimetro);
			break;
	}
	
}
